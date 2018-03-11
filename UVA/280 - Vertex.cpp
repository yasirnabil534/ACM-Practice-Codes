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
#define CASEL(t)        printf("Case #%d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
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
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vector <int> graph[105],vc[105];

void make_graph(int u, int v)
{
    graph[u].pb(v);
}

void DFS(int u, int visited[])
{
    if(visited[u]==1) return;
    visited[u] = 1;

    for(int i=0; i < graph[u].size(); i++)
        DFS(graph[u][i],visited);
}

void DFS2(int u, int visited[])
{
    if(visited[u]==1) return;

    for(int i=0; i < graph[u].size(); i++)
        DFS(graph[u][i],visited);
}

int main()
{
    int n;
    int m,p;
    int visited[105];
    while(true)
    {
        scin(n);
        if(n<=0) break;
        while(true)
        {
            scin(m);
            if(m<=0) break;
            while(true)
            {
                scin(p);
                if(p==0) break;
                make_graph(m,p);
            }
        }
        for(int i = 1; i <= n; i++)
        {
            ms(visited,0);
            DFS2(i,visited);
            for(int j=1; j<=n; j++)
            {
                if(visited[j]==0) vc[i].pb(j);
            }
        }
        scin(m);
        for(int i=0; i<m; i++)
        {
            scin(p);
//        for(int i=1; i<=n; i++)
//            cout<<visited[i]<<' ';

            pf("%d",vc[p].size());
            for(int i=0; i<vc[p].size(); i++)
                pf(" %d",vc[p][i]);
            pf("\n");
        }
        for(int i = 0; i <=n; i++){
            vc[i].clear();
            graph[i].clear();
        }
    }
    return 0;
}
