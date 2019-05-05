/// LCA Template, At first add all code from file Template(Better).cpp here 

bool cmp(ll x, ll y)
{
    return x>y;
}

int L[100002];
int P[100002][23];
int T[100002];

vi graph[100005];

void DFS(int par, int u, int lvl)
{
    T[u] = par;
    L[u] = lvl;
    for(int i = 0; i < (int)graph[u].size(); i++)
    {
        int v = graph[u][i];
        if(v==par) continue;
        DFS(u, v, lvl + 1);
    }
}

int _find(int N, int p, int k)  /// Not necessary, just find kth parent in O(lg(n))
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
    for(int j = 1; 1 << j < N; j++)
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
