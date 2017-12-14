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
#define vpii            vector< pii >
#define vpll            vector< pll >
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
#define mx              123456789
#define PI              2*acos(0.0)

using namespace std;

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fx[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vi graph[10005];
int visited[10005],color[10005];
int possible;

void make_graph_list(int u, int v)
{
    graph[u].pb(v);
    graph[v].pb(u);
}

void BFS(int source)
{
    queue <int> Q;
    Q.push(source);
    visited[source] = 1;
    color[source] = 1;
    while(!Q.empty())
    {
        int u = Q.front();
        Q.pop();
        for(int i=0;i<graph[u].size();++i)
        {
            if(visited[graph[u][i]]==0)
            {
                int v = graph[u][i];
                visited[v] = 1;
                if(color[u]==1&&color[v]==0)
                    color[v]=2;
                else if(color[u]==2&&color[v]==0)
                    color[v] = 1;
                else if(color[u]!=0&&color[u]==color[v])
                {
                    possible = 2;
                    break;
                }
                else if (color[u]==0&&color[u]==color[v])
                {
                    color[u] = 1;
                    color[v] = 2;
                }
                else
                {
                    possible = 2;
                    break;
                }
                ///pf("%d = %d color, %d = %d color and possible = %d\n",u,color[u],v,color[v],possible);
                Q.push(v);
            }
            if(visited[graph[u][i]]==1)
            {
                int v = graph[u][i];
                if(color[u]==color[v]&&color[u]!=0)
                {
                    possible = 2;
                    break;
                }
                ///pf("%d = %d color, %d = %d color and possible = %d\n",u,color[u],v,color[v],possible);
            }
        }
    }
}

int main()
{
    int n,m;
    while(1)
    {
        int u,v;
        ms(visited,0);
        ms(color,0);
        possible = 1;
        scin(n);
        if(n==0) break;
        for(int i=0;i<n;i++) graph[i].clear();
        scin(m);
        int s;
        for(int i=0;i<m;i++)
        {
            scin(u);
            scin(v);
            make_graph_list(u,v);
            if(i==0) s = u;
        }
        BFS(s);
        if(possible==1)
            pf("BICOLORABLE.\n");
        else if(possible == 2)
            pf("NOT BICOLORABLE.\n");
    }
    return 0;
}
