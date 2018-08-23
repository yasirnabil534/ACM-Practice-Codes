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

struct Node
{
    ll no, indegree;
    Node()
    {
        no = indegree = 0;
    }
    bool operator < (const Node& A) const
    {
        if(indegree!=A.indegree)
            return indegree>A.indegree;
        else if(no!=A.no)
            return no>A.no;
        return 0;
    }
};

vl graph[100005];
map<string,ll> stll;

void make_graph(ll u, ll v)
{
    graph[u].pb(v);
}

int main()
{
    ll n;
    ll t = 0;
    while(scln(n)!=EOF)
    {
        t++;
        stll.clear();
        ll m;
        string str[n+3];
        for(ll i = 1; i <= n; i++)
        {
            getchar();
            cin>>str[i];
            stll[str[i]] = i;
        }
        Node ar[n+1];
        for(ll i = 1;i <= n; i++){ ar[i].no = i; /*ar[i].indegree = 0;*/}
        scln(m);
        string ss1, ss2;
        for(ll i = 0; i < m; i++)
        {
            getchar();
            cin>>ss1>>ss2;
            make_graph(stll[ss1],stll[ss2]);
            ar[stll[ss2]].indegree++;
        };
        pf("Case #%d: Dilbert should drink beverages in this order:",t);
        ll key = 1, next = 2;
        Node fr;
        priority_queue<Node>PQ[3];
        queue<ll>Q;
        while(!Q.empty())Q.pop();
        for(ll i = 1; i <= 2; i++) while(!PQ[i].empty())PQ[i].pop();
        for(ll i = 1; i <= n; i++)
            PQ[1].push(ar[i]);
        while(!PQ[key].empty() || !PQ[next].empty())
        {
            fr = PQ[key].top();
            Q.push(fr.no);
            for(ll i = 0; i < graph[fr.no].size(); i++)
                if(ar[graph[fr.no][i]].indegree>0)ar[graph[fr.no][i]].indegree--;
            ar[fr.no].indegree = 10000000000;
            for(ll i = 1; i <= n; i++)
                if(ar[i].indegree<10000000000) PQ[next].push(ar[i]);
            while(!PQ[key].empty()) PQ[key].pop();
            swap(next,key);
        }
        while(!Q.empty())
        {
            cout<<' '<<str[Q.front()];
            Q.pop();
        }
        pf(".\n\n");
        for(ll i = 0; i <= n; i++) graph[i].clear();
    }
    return 0;
}
