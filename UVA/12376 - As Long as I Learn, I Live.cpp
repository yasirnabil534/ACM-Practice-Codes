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

int cost[10005],key;
vector <int> graph[10005];
ll visited[10005];

bool cmp(int a, int b)
{
    if(cost[a]!=cost[b]) return cost[a]>cost[b];
    return 0;
}

void make_graph(int u, int v)
{
    graph[u].pb(v);
}

ll DFS(int source)
{
    ll c,xam = 0;
    if(graph[source].size()>0)
    {
        sort(graph[source].begin(),graph[source].end(),cmp);
        c = DFS(graph[source][0]);
        if(c>xam)
        {
            xam = c;
            if(cost[graph[source][0]]==xam)
                key = graph[source][0];
        }
    }
    return cost[source]+xam;
}

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        getchar();
        int n,m,x,y;
        key = -1;
        scin(n);
        scin(m);
        ms(cost,0);
        for(int i=0; i<n; i++)
            scin(cost[i]);
        for(int i=0; i<m; i++)
        {
            scin(x);
            scin(y);
            make_graph(x,y);
        }
        ll ans = DFS(0);
        CASE(t);
        pf("%lld %d\n",ans,key);
        for(int i = 0; i <= 105; i++)
            graph[i].clear();
    }
    return 0;
}

/**
2

6 6
0 8 9 2 7 5
5 4
5 3
1 5
0 1
0 2
2 1

6 5
0 8 9 2 7 5
5 4
5 3
1 5
0 1
0 2
*/
/**
Case 1: 29 4
Case 2: 9 2
*/
