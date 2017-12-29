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

using namespace std;

///--------------Graph Moves--------------------------------------
const int fx[] = {+1,-1,+0,+0};
const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fx[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

int graph[10004][10004];
int dist[10004][10004];
bool visited[10004][10004];

//void make_graph_list(pi u, pi v)
//{
//    graph[u].pb(v);
//}

bool isCorrect(pii x, int n, int m)
{
    if(x.ff>=0&&x.ss>=0&&x.ff<n&&x.ss<m&&graph[x.ff][x.ss]==0)
        return true;
    return false;
}

void BFS(pii source,pii destination, int a, int b)
{
    ms(visited,0);
    queue <pii> Q;
    Q.push(source);
    visited[source.ff][source.ss] = 1;
    dist[source.ff][source.ss] = 0;
    while(!Q.empty())
    {
        pii v,u = Q.front();
        Q.pop();
        for(int i=0; i<4; i++)
        {
            v.ff = u.ff + fx[i];
            v.ss = u.ss + fy[i];
            if(isCorrect(v,a,b))
            {
                if(visited[v.ff][v.ss]==0)
                {
                    visited[v.ff][v.ss] = 1;
                    dist[v.ff][v.ss] = dist[u.ff][u.ss] + 1;
                    Q.push(v);
                }
            }
        }
        if(v.ff == destination.ff&&v.ss==destination.ss)
            break;
    }
}

int main()
{
//    freopen("input.txt","r",stdin);
    int row, column, n,x,y,z,m;
    while(1)
    {
        scin(row);
        scin(column);
        if((row==0||column==0)) break;
        ms(graph,0);
        scin(n);
        for(int i=0; i<n; i++)
        {
            scin(x);
            scin(z);
            for(int j=0; j<z; j++)
            {
                scin(y);
                graph[x][y] = 1;
            }
        }
        scin(x);
        scin(y);
        scin(z);
        scin(n);
        pii p1 = mp(x,y);
        pii p2 = mp(z,n);
        BFS(p1,p2,row,column);
//        for(int i=0;i<row;i++)
//        {
//            for(int j=0;j<column;j++)
//                pf("%5d",dist[i][j]);
//            pf("\n\n\n");
//        }
        pf("%d\n",dist[p2.ff][p2.ss]);
    }
    return 0;
}
