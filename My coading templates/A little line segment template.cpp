/**-----------------
The function det(Two points of a line, two pints of another line) return if two points A(p1,q1) and
B(p2,q2) intersect each other
It is solution of this cf problem: http://codeforces.com/contest/994/problem/C
*/
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

bool onSegment(Point p, Point q, Point r)
{
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
       return true;
 
    return false;
}

int orientation(pll p, pll q, pll r)
{
    // See https://www.geeksforgeeks.org/orientation-3-ordered-points/
    // for details of below formula.
    int val = (q.ss - p.ss) * (r.ff - q.ff) - (q.ff - p.ff) * (r.ss - q.ss);

    if (val == 0) return 0;  // colinear

    return (val > 0)? 1: 2; // clock or counterclock wise
}

bool det(pll p1,pll q1,pll p2, pll q2)
{
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    // General case
    if (o1 != o2 && o3 != o4)
        return true;
    // Special Cases
    // p1, q1 and p2 are colinear and p2 lies on segment p1q1
    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
 
    // p1, q1 and q2 are colinear and q2 lies on segment p1q1
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
 
    // p2, q2 and p1 are colinear and p1 lies on segment p2q2
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
 
     // p2, q2 and q1 are colinear and q1 lies on segment p2q2
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;
    return false;
}

int main()
{
    pll ar[6],br[6];
    for(ll i = 0; i < 4; i++)
    {
        scln(ar[i].ff);
        scln(ar[i].ss);
    }
    for(ll i = 0; i < 4; i++)
    {
        scln(br[i].ff);
        scln(br[i].ss);
    }
//    for(ll i = 0; i < 4; i++)
//        pf("%lld %lld %lld %lld\n",ar[i].ff,ar[i].ss,br[i].ff,br[i].ss);
    sort(ar,ar+4);
    sort(br,br+4);
//    if(ar[0].ss!=ar[2].ss)
//    {
//        for(ll i = 0; i < 4; i++)
//            swap(ar[i],br[i]);
//    }
    bool fg = 0;
    for(ll i = 0; i < 4; i++)
    {
        if(br[i].ff>=ar[0].ff&&br[i].ff<=ar[2].ff&&br[i].ss>=ar[0].ss&&br[i].ss<=ar[1].ss)
            fg = 1;
    }
    for(ll i = 0; i < 4; i++)
    {
        if(ar[i].ff>=(br[0].ff+abs(br[1].ff-br[0].ff)/2.0)&&ar[i].ff<=(br[3].ff-abs(br[3].ff-br[1].ff)/2.0)&&ar[i].ss>=(br[1].ss+abs(br[0].ss-br[1].ss)/2)&&ar[i].ss<=(br[2].ss-abs(br[2].ss-br[0].ss)/2.0))
            fg = 1;
    }
    if(!fg)
    {
        swap(ar[0],ar[1]);
        swap(br[3],br[2]); br[4] = br[0];
        for(ll i = 3; i >= 0; i--)
            ar[i+1] = ar[i];
        ar[0] = ar[4];
        ar[5] = ar[1];
        for(ll i = 0; i < 4; i++)
        {
            if(det(br[i],br[i+1],ar[i],ar[i+1])||det(br[i],br[i+1],ar[i+1],ar[i+2])) fg = 1;
        }
    }
    if(fg) pf("YES\n");
    else pf("NO\n");
    return 0;
}
