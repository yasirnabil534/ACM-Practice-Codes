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

vector <int> graph[105];
int visited[105];

void make_graph(int u, int v)
{
    graph[u].pb(v);
    graph[v].pb(u);
}

void DFS(int u,int vis)
{
    if(visited[u]!=0) return;
    visited[u] = vis;

    for(int i=0; i < graph[u].size(); i++)
        DFS(graph[u][i],vis);
}


int main()
{
    int t,T;
    scin(T);
    getchar();
    getchar();
    RUN_CASE(t,T)
    {
        ms(visited,0);
        int largest, parent, child;
        char ch, str[5];
        sc("%c",&ch);
        largest = ch - 'A';
        getchar();
        while(gets(str))
        {
            if(strlen(str)==0) break;
            parent = str[0] - 'A';
            child = str[1] - 'A';
            make_graph(parent,child);
        }
        int vis = 0;
        for(int i = 0; i <= largest; i++)
        {
            if(visited[i]==0)
            {
                vis++;
                DFS(i,vis);
            }
        }
        if(t>1)pf("\n");
        pf("%d\n",vis);
        for(int i=0; i <= largest; i++)
            graph[i].clear();
    }
    return 0;
}
