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
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fx[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

struct Data
{
    int x;
    Data()
    {
        x = infinity;
    }
};

map<ll,vi> graph;
map<ll, ll> visited;
map<ll, ll> ::iterator ii;
map<ll, Data> dis;

void make_graph_list(ll u, ll v)
{
    graph[u].pb(v);
}


void BFS(int source)
{
    visited.clear();dis.clear();
    queue <ll> Q;
    Q.push(source);
    visited[source] = 1;
    dis[source].x = 0;
    while(!Q.empty())
    {
        ll u = Q.front();
        Q.pop();
        for(ll i=0;i<graph[u].size();++i)
        {
            if(visited[graph[u][i]]==0)
            {
                ll v = graph[u][i];
                visited[v] = 1;
                if(dis[v].x>dis[u].x+1)
                    dis[v].x = dis[u].x + 1;
                Q.push(v);
            }
        }
    }
}


int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    set<int>st;
    set<int>::iterator ss;
    ll test = 0;
    ll n,a,b;
    while(1)
    {
        scln(n);
        if(n==0) break;
        st.clear();
        ll xam = -10100;
        graph.clear();
        for(ll i=0; i<n; i++)
        {
            scln(a);
            scln(b);
            if(a>xam) xam = a;
            if(b>xam) xam = b;
            st.insert(a);
            st.insert(b);
            make_graph_list(a,b);
            make_graph_list(b,a);
        }
        while(1)
        {
            scln(a);
            scln(b);
            if(a==0&&b==0) break;
            BFS(a);
            ll cnt = 0;
            for(ss = st.begin();ss!=st.end();++ss)
            {
                ll i = *ss;
                if(visited[i]==1&&dis[i].x<=b);
                else cnt++;
                ///cout << "Node " << i <<" = "<< dis[i].x << '\n';
            }
            pf("Case %lld: %lld nodes not reachable from node %lld with TTL = %lld.\n",++test,cnt,a,b);
        }
    }
    return 0;
}
