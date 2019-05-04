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
    for(int i = 0; i < N; i++)
    {
        P[i][0] = T[i];
    }
    for(int j = 1; 1 << j < N; j++)
    {
        for(int i = 0; i < N; i++)
        {
            if(P[i][j-1] != -1)
                P[i][j] = P[P[i][j-1]][j-1];
        }
    }
}

int main()
{
    graph[0].pb(1);
    graph[1].pb(0);
	graph[0].pb(2);
	graph[2].pb(0);
	graph[2].pb(3);
	graph[3].pb(2);
	graph[2].pb(4);
	graph[4].pb(2);
	DFS(0, 0, 0);
	LCA_init(5);
	printf( "%d\n", LCA_query(5,3,4) );
    return 0;
}
