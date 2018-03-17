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
const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vector <int> graph[1005];
int visited[1005][1005];
char str[105][105];

bool isCorrect(int x, int y, int m, int n)
{
    if(x>=0&&y>=0&&x<m&&y<n&&visited[x][y]==0)
        return true;
    return false;
}

void make_graph(int u, int v)
{
    graph[u].pb(v);
}

void DFS(int u, int v, int row, int column, int vis)
{
    if(visited[u][v]!=0||str[u][v]=='*') return;
    visited[u][v] = vis;

    for(int k = 0; k < 8; k++)
    {
        if(isCorrect(u+fx[k], v+fy[k],row,column)&&str[u+fx[k]][v+fy[k]]=='@')
        {
            ///cout<<u+fx[k]<<' '<<v+fy[k]<<' '<<vis<<endl;
            DFS(u+fx[k],v+fy[k],row,column,vis);
        }
    }
}

int main()
{
    int m,n;
    while(1)
    {
        scin(m);
        scin(n);
        if(m==0||n==0) break;
        char ch;
        getchar();
        for(int i=0; i<m; i++)
        {
            sc("%s",str[i]);
            getchar();
        }
//        for(int i=0;i<m;i++)
//        {
//            for(int j=0;j<n;j++)
//            {
//                pf("%c",str[i][j]);
//            }
//            pf("\n");
//        }
        int vis = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(visited[i][j]==0&&str[i][j]=='@')
                {
                    ++vis;
                    DFS(i,j,m,n,vis);
                }
            }
        }
        pf("%d\n",vis);
        for(int i=0; i<m; i++)
        {
            ms(str[i],0);
            ms(visited[i],0);
        }

    }
    return 0;
}
/**Input

1 1
*
3 5
*@*@*
**@**
*@*@*
5 5
****@
*@@*@
@@@*@
@@**@
*@**@

Output:
0
1
2

*/
