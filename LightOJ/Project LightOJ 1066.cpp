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


// Ordered set
/**#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(1)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4 //cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl;  // 0 //cout<<X.order_of_key(1)<<endl;   // 0 //cout<<X.order_of_key(3)<<endl;   // 2 //cout<<X.order_of_key(4)<<endl;   // 2 //cout<<X.order_of_key(400)<<endl; // 5
*/

///--------------Graph Moves--------------------------------------
const int fx[] = {+1,-1,+0,+0};
const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vl graph[300005];
ll visited[300005];
ll dist[100005];

bool check(ll a, ll b, ll n, ll m)
{
    if(a>=0&&a<n&&b>=0&&b<m)
        return 1;
    return 0;
}

void make_graph(ll u, ll v)
{
    graph[u].pb(v);
    graph[v].pb(u);
}

ll alph[26];
pair<ll,ll> mm[26];

void BFS(ll u)
{
    queue <ll> Q;
    Q.push(u);
    visited[u] = 1;
    dist[u] = 0;
    while(!Q.empty())
    {
        ll v = Q.front();
        Q.pop();
        for(ll i = 0; i < graph[v].size(); i++)
        {
            if( visited[graph[v][i]] == 0 )
            {
                Q.push( graph[v][i] );
                visited[graph[v][i]] = 1;
                dist[graph[v][i]] = dist[v] + 1;
            }
        }
    }
}

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        for(ll i = 0; i < 26; i++) mm[i] = mp(0,0);
        ll n, m, k, u, v;
        scln(n);
        m = n;
        ms(visited,0);
        ms(alph,0);
        ll ar[n][m];
        char str[n][m+5];
        ll x = 1;
        getchar();
        for(ll i =0; i < n; i++)
        {
            for(ll j = 0; j <= m; j++)
            {
                sc("%c",&str[i][j]);
            }
        }
        ll cnt = 0, ans = 0;
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                ar[i][j] = x++;
                if(str[i][j]>='A'&&str[i][j]<='Z')
                {
                    alph[str[i][j]-'A'] = ar[i][j];
                    mm[str[i][j]-'A'] = mp(i,j);
                    cnt++;
                }
            }
        }
//        for(ll i = 0; i < n; i++)
//        {
//            for(ll j = 0; j < m ;j++)
//                cout<<ar[i][j]<<' ';
//            puts("");
//        }
        for(ll i = 0; i < n; i++)
        {
            for(ll j = 0; j < m; j++)
            {
                if(str[i][j]=='.'||str[i][j]=='A')
                {
                    if(i<n-1 && (str[i+1][j]=='.'||str[i+1][j]=='A'))
                    {
                        make_graph(ar[i][j], ar[i+1][j]);
                    }
                    if(j<m-1 && (str[i][j+1]=='.'||str[i][j+1]=='A'))
                    {
                        make_graph(ar[i][j], ar[i][j+1]);
                    }
                }
            }
        }
        bool flag = true;
        ll a = mm[0].ff, b = mm[0].ss;
//        for(ll i = 1; i <= m*n; i++)
//        {
//            cout<<i<<":\n";
//            for(ll j = 0; j < graph[i].size(); j++)
//            {
//                cout<<graph[i][j]<<' ';
//            }
//            cout<<'\n';
//        }
        for(ll i = 1; i < cnt; i++)
        {
            ms(dist,0);
            ms(visited,0);
            ll p = mm[i].ff , q = mm[i].ss;
//            cout<<str[p][q]<<endl;
            for(ll k = 0; k < 4; k++)
            {
                ll r = p + fx[k], s = q + fy[k];
                if(check(r,s,n,m)&&(str[r][s]=='.'||(str[r][s]>='A'&&str[r][s]<str[p][q])))
                    make_graph(ar[p][q],ar[r][s]);
            }
            BFS(ar[a][b]);
//            cout<<a<<' '<<b<<' '<<"dist of "<< (char)('A'+i) <<" :"<<dist[ar[p][q]]<<endl;
            if(visited[ar[p][q]]==0) flag = 0;
            else ans += dist[ar[p][q]];
            a = p;
            b = q;
        }
//        for(ll i = 1; i <= m*n; i++)
//        {
//            cout<<i<<":\n";
//            for(ll j = 0; j < graph[i].size(); j++)
//            {
//                cout<<graph[i][j]<<' ';
//            }
//            cout<<'\n';
//        }
        CASE(t);
        if(flag==0) pf("Impossible\n");
        else pf("%lld\n",ans);
        for(ll i = 1; i <= m*n; i++) graph[i].clear();
    }
    return 0;
}
/**
4

5
A....
####.
..B..
.####
C.DE.

2
AC
.B

2
A#
#B

3
A.C
##.
B..
*/
