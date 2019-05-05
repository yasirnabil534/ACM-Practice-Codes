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
ll BigMulmod(ll base, ll power, ll mod){if(power==0) return 1%mod; if(power==1) return base%mod; ll x = BigMulmod(base,power/2,mod); x = Mulmod(x,x,mod); if(power%2){x = Mulmod(x,(base%mod),mod);}return x;}
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


bool cmp(ll x, ll y)
{
    return x>y;
}

int L[10002];
int dist[10002];
int P[10002][23];
int T[10002];

vi graph[10002];
vi cost[10002];

void make_graph(int u, int v, int x)
{
    graph[u].pb(v);
    graph[v].pb(u);
    cost[u].pb(x);
    cost[v].pb(x);
}

void DFS(int par, int u, int lvl, int d)
{
    T[u] = par;
    L[u] = lvl;
    dist[u] = d;
    for(int i = 0; i < (int)graph[u].size(); i++)
    {
        int v = graph[u][i];
        if(v==par) continue;
        DFS(u, v, lvl + 1, d + cost[u][i]);
    }
}

int _find(int N, int p, int k)
{
    int lg;
    lg = 0;
    while(1)
    {
        int next = lg + 1;
        if((1<<next)>L[p]) break;
        lg++;
    }
    for(int i = lg; i >= 0; i--)
    {
        if(L[p] - (1 << i) >= k)
            p = P[p][i];
    }
    return p;
}

int LCA_query(int N, int p, int q)
{
    int lg;
    if(L[p] < L[q])
    {
        swap(p,q);
    }
    lg = 1;
    while(1)
    {
        int next = lg + 1;
        if((1<<next)>L[p]) break;
        lg++;
    }
    for(int i = lg; i >= 0; i--)
    {
        if(L[p] - (1 << i) >= L[q])
            p = P[p][i];
    }
    if(p==q) return p;
    for(int i = lg; i >= 0; i--)
    {
        if(P[p][i] != -1 && P[p][i] != P[q][i])
        {
            p = P[p][i];
            q = P[q][i];
        }
    }
    return T[p];
}

void LCA_init(int N)
{
    ms(P, -1);
    for(int i = 1; i <= N; i++)
    {
        P[i][0] = T[i];
    }
    for(int j = 1; 1 << j <= N; j++)
    {
        for(int i = 1; i <= N; i++)
        {
            if(P[i][j-1] != -1)
                P[i][j] = P[P[i][j-1]][j-1];
        }
    }
}

int main()
{
    int t,TT;
    scin(TT);
    RUN_CASE(t,TT)
    {
        if(t>1){
            pf("\n");
            ms(L,0);
            ms(dist,0);
            ms(T,0);
        }
        int n;
        scin(n);
        int a,b,x;
        for(int i = 1; i < n; i++)
        {
            scin(a);
            scin(b);
            scin(x);
            make_graph(a,b,x);
        }
        DFS(0, 1, 0, 0);
        LCA_init(n);
        string str;
        while(1)
        {
            cin>>str;
            if(str=="DONE") break;
            scin(a);
            scin(b);
            if(str=="DIST")
            {
                int m = LCA_query(n,a,b);
                pf("%d\n", dist[a] + dist[b] - (2*dist[m]));
            }
            else if(str=="KTH")
            {
                scin(x);
                int m = LCA_query(n,a,b);
                if(L[a] - L[m] + 1 >= x)
                    pf("%d\n",_find(n,a,L[a]-x+1));
                else
                    pf("%d\n",_find(n,b,2*L[m] + x - L[a] - 1));
                    //pf("%d\n",_find(n,b,(L[b]-L[m])-(x-(L[a]-L[m]+1))));
            }
        }
        for(int i = 0; i <= n; i++)
        {
            graph[i].clear();
            cost[i].clear();
        }
    }
    return 0;
}
