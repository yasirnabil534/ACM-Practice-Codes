#include<bits/stdc++.h>
 
#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define mp              make_pair
#define db              double
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define vi              vector< int >
#define vl              vector< ll >
#define vii             vector<vector< int > >
#define vll             vector<vector< ll > >
#define DBG             pf("HI\n")
#define MOD             1000000007
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
#define PI              2*acos(0.0)
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)
 
using namespace std;
 
template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return sqr(POW(B,P/2));}
ll Bigmod(ll base, ll power, ll mod){if(power==0) return 1%mod; if(power==1) return base%mod; ll x = Bigmod(base,power/2,mod); x = (x*x)%mod; if(power%2){x = (x*(base%mod))%mod;}return x;}
ll Mulmod(ll base, ll power, ll mod){if(power==0) return 0; if(power==1) return base%mod; ll x = Mulmod(base,power/2,mod); x = (x+x)%mod; if(power%2){x = (x+(base%mod))%mod;}return x;}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
ll ModInverse(ll number, ll mod){return Bigmod(number, mod-2, mod);}
bool isConso(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
bool isPrime( ll val ) { if( val == 2 ) return true ; if( val % 2 == 0 || val == 1 ) return false ; ll sqrt_N = (ll) ( ( double ) sqrt( val ) ) ; for( ll i = 3 ; i <= sqrt_N ; i += 2 ) { if( val % i == 0 ) return false ; } return true ; }
template<class T> string convert(T _input) { stringstream blah; blah << _input; return blah.str(); }
 
/**
// Ordered set
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(1)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4 //cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl;  // 0 //cout<<X.order_of_key(1)<<endl;   // 0 //cout<<X.order_of_key(3)<<endl;   // 2 //cout<<X.order_of_key(4)<<endl;   // 2 //cout<<X.order_of_key(400)<<endl; // 5
*/
 
///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------
 
struct Matrix
{
    ll v[5][5]; /// Sizes may vary
    ll row, col;
    Matrix operator = (const Matrix X)
    {
        row = X.row;
        col = X.col;
        for(ll i = 0; i < row; i++)
        {
            for(ll j = 0; j < col; j++)
                v[i][j] = X.v[i][j];
        }
    }
};
 
ll mod;
 
Matrix multiply(const Matrix &A, const Matrix &B)
{
    assert(A.col==B.row);
    Matrix R;
    R.row = A.row;
    R.col = B.col;
    for(ll i = 0; i < R.row; i++)
    {
        for(ll j = 0; j < R.col; j++)
        {
            ll sum = 0;
            for(ll k = 0; k < A.col; k++)
            {
                sum += (A.v[i][k] * B.v[k][j]);
                sum %= mod;
            }
            R.v[i][j] = sum;
        }
    }
    return R;
}
 
 
Matrix power(const Matrix &M, ll p)
{
    assert(p >= 1);
    if(p == 1) return M;
    if(p%2 == 1)
        return multiply(M, power(M, p-1));
    Matrix ret = power(M, p / 2);
    Matrix bet = multiply(ret,ret);
    return bet;
}
 
int main()
{
    int t,T;
    Matrix base;
    base.row = 2LL;
    base.col = 2LL;
    base.v[0][0] = base.v[0][1] = base.v[1][0] = 1LL;
    base.v[1][1] = 0;
    scin(T);
    RUN_CASE(t,T)
    {
        ll a,b,n,m;
        scln(a);
        scln(b);
        scln(n);
        scln(m);
        mod = POW(10LL,m);
        Matrix MAT, Res, M;
        MAT.row = 2LL;
        MAT.col = 1LL;
        MAT.v[0][0] = b;
        MAT.v[1][0] = a;
        M = power(base, n - 1);
        Res = multiply(M, MAT);
        CASE(t);
        pf("%lld\n",Res.v[0][0]);
    }
    return 0;
}