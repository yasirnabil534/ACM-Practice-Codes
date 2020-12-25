/// Kruskal1 finds minimum spanning tree, Kruskal2 finds Maximum spanning tree
void Solve(int);
void TEST();

int main()
{
    TEST();
    return 0;
}

void TEST(){
    int t = 1, T;
    cin>>T;
    RUN_CASE(t,T){
        Solve(t);
    }
}

struct Edge{
    int u, v, w;
    Edge(){}
    Edge(int a, int b, int c){
        u = a;v = b;w = c;
    }
};

bool cc(Edge A, Edge B){
    return A.w < B.w;
}
bool ccc(Edge A, Edge B){
    return A.w > B.w;
}

vector<Edge> E;

int p[105];

int _find(int x){
    if(p[x]==x) return x;
    return p[x] = _find(p[x]);
}

int Kruskal1(){
    sort(all(E),cc);
    int sz = (int)E.size();
    int ans = 0;
    for(int i = 0; i < sz; i++){
        if(_find(E[i].u) != _find(E[i].v)){
            p[p[E[i].u]] = p[E[i].v];
            ans += E[i].w;
        }
    }
    return ans;
}

int Kruskal2(){
    sort(all(E),ccc);
    int sz = (int)E.size();
    int ans = 0;
    for(int i = 0; i < sz; i++){
        if(_find(E[i].u) != _find(E[i].v)){
            p[p[E[i].u]] = p[E[i].v];
            ans += E[i].w;
        }
    }
    return ans;
}

void Solve(int t){
    int n;
    scin(n);
    int u,v,w;
    while(true){
        scin(u);
        scin(v);
        scin(w);
        if(u==0&&v==0&&w==0){
            break;
        }
        E.pb(Edge(u,v,w));
    }
    int ans1, ans2;
    for(int i = 0; i <= n; i++){
        p[i] = i;
    }
    ans1 = Kruskal1();
    for(int i = 0; i <= n; i++){
        p[i] = i;
    }
    ans2 = Kruskal2();
    int g = ans1+ans2;
    CASE(t);
    if(g%2){
        pf("%d/2\n",g);
    }
    else{
        pf("%d\n",g/2);
    }
    E.clear();
}
