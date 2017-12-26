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
#define RUN_CASE(t,T)   for(__typeof(t) t=1; t<=T; t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              123456789
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fx[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vi graph[105];
int visited[105];

void make_graph_list(int u, int v)
{
    graph[u].pb(v);
    graph[v].pb(u);
}

void BFS(int source, int destination)
{
    for(int i=0;i<105;i++) visited[i] = infinity;
    queue <int> Q;
    Q.push(source);
    visited[source] = 0;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();++i)
        {
            if(visited[graph[u][i]]>visited[u] + 1)
            {
                int v = graph[u][i];
                visited[v] = visited[u] + 1;
                if(v==destination)
                    return;
                Q.push(v);
            }
        }
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    int n,i,tc=0,a,b;
    while(scin(n)!=EOF)
    {
        ++tc;
        for(i = 0; i < n; i++)
        {
            scin(a);
            make_graph_list(1,a);
        }
        for(i = 2; i < 20; i++)
        {
            scin(n);
            for(int j = 1; j <= n; j++)
            {
                scin(a);
                make_graph_list(i,a);
            }
        }
        scin(n);
        pf("Test Set #%d\n",tc);
        for(i = 0; i < n; i++)
        {
            scin(a);
            scin(b);
            BFS(a,b);
            pf("%2d to %2d: %d\n",a,b,visited[b]);
        }
        pf("\n");
        for(i=0;i<105;i++) graph[i].clear();
    }
    return 0;
}
