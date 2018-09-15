/**
-This Template contains strongly connected componant algorithm
-scc contains nodes of strongly connected componants and
SCC is the adjecency list of strongly connected componants as 
every strongly connected componants are one node
-It prints lexicographically
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

bool cmp(ll a, ll b) {return a>b;}

vl graph[2][100005];
vl SCC[100005];
vl scc[100005];
ll visited[3][100005];
ll mark[100005];
ll dp[100005];
stack<ll> stk[2];
map< pair < ll,ll >, ll > key;

void make_graph(ll u, ll v)
{
    graph[0][u].pb(v);
    graph[1][v].pb(u);
}

void make_scc(ll u, ll v)
{
    SCC[u].pb(v);
}

void DFS(ll u, ll x)
{
    if(visited[x][u]==1) return;
    visited[x][u] = 1;
    for(ll i = 0; i < graph[x][u].size(); i++)
        DFS(graph[x][u][i],x);
    stk[x].push(u);
}

ll dfsForSCC(ll u)
{
    if(visited[2][u] == 1) return dp[u];
    visited[2][u] = 1;
    ll q = 0;
    for(ll i = 0; i < SCC[u].size(); i++)
    {
        q += dfsForSCC(SCC[u][i]);
    }
    q += (ll)scc[u].size();
    return dp[u] = q;
}

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        ms(visited,0);
        ms(mark,0);
        ms(dp,0);
        key.clear();
        ll n,u,v;
        scln(n);
        for(ll i = 0; i < n; i++)
        {
            scln(u);
            scln(v);
            make_graph(u,v);
        }
        for(ll i = 1; i <= n; i++) if (visited[0][i]==0) DFS(i,0);
        ll xam = -1,ans, wht = 1,nd;
        while(!stk[0].empty())
        {
            ll x = stk[0].top();
            stk[0].pop();
            if(visited[1][x]==0)
            {
                DFS(x,1);
                while(!stk[1].empty())
                {
                    scc[wht].pb(stk[1].top());
                    mark[(ll)stk[1].top()] = wht;
                    stk[1].pop();
                }
                sort(all(scc[wht]));
                wht++;
            }
        }
        for(ll i = 1; i <= n; i++)
        {
            for(ll j = 0; j < graph[0][i].size(); j++)
            {
                if(mark[i]!=mark[graph[0][i][j]]&&key[mp(mark[i], mark[graph[0][i][j]])]==0)
                {
                    make_scc(mark[i], mark[graph[0][i][j]]);
                    key[mp(mark[i], mark[graph[0][i][j]])] = 1;
                }
            }
        }
        for(ll i = 1; i < wht; i++)
        {
            if(visited[2][i]==0) ans = dfsForSCC(i);
        }
        for(ll i = 1; i < wht; i++)
        {
            if(xam <= dp[i])
            {
                if(xam == dp[i])
                {
                    if(scc[nd][0]>scc[i][0])
                    {
                        ans = scc[i][0];
                        nd = i;
                    }
                }
                else
                {
                    ans = scc[i][0];
                    xam = dp[i];
                    nd = i;
                }
            }
        }
        CASE(t);
        pf("%lld\n",ans);
        for(ll i = 1; i <= n; i++) graph[0][i].clear();
        for(ll i = 1; i <= n; i++) graph[1][i].clear();
        for(ll i = 0; i <= wht; i++) scc[i].clear();
        for(ll i = 0; i <= wht; i++) SCC[i].clear();
    }
    return 0;
}
