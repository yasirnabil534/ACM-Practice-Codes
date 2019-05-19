/// Aho Corasick algorithm, SPOJ-SUB_PROB

const int MX = 2005;
int n;  /// n is the number of queries
char text[1000006];
char dictionary[MX][MX];
const int goes = 127; /// If MLE comes, set it to 27 for only lowercase letters

struct NODE
{
    int cnt;
    bool vis;
    NODE *next[goes];
    vector<NODE *> out;
    NODE()
    {
        for(int i = 0; i < goes; i++)
            next[i] = NULL;
        out.clear();
        vis = false;
        cnt = 0;
    }
    ~NODE()
    {
        for(int i = 1; i < goes; i++)
            if(next[i]!=NULL && next[i] != this)
                delete next[i];
    }
};

NODE *root;

void buildtrie()
{
    root = new NODE();
    for(int i = 0; i < n; i++)
    {
        NODE *p = root;
        for(int j = 0; dictionary[i][j]; j++)
        {
            char c = dictionary[i][j]; /// - 'a' + 1; ///uncomment it for only lowercase letters
            if(!p->next[c])
                p->next[c] = new NODE();
            p = p->next[c];
        }
    }
    queue<NODE *> q;
    for(int i = 0; i < goes; i++)
    {
        if(!root->next[i])
            root->next[i] = root;
        else
        {
            q.push(root->next[i]);
            root->next[i]->next[0] = root;  /// next[0] is back pointer
        }
    }
    while(!q.empty())
    {
        NODE *u = q.front();
        q.pop();
        for(int i = 1; i < goes; i++)
        {
            if(u->next[i])
            {
                NODE *v = u->next[i];
                NODE *w = u->next[0];
                while(!w->next[i])
                    w = w->next[0];
                v->next[0] = w = w->next[i];
                w->out.pb(v);
                q.push(v);
            }
        }
    }
}

void aho_corasick()
{
    NODE *p = root;
    for(int i = 0; text[i]; i++)
    {
        char c = text[i]; /// - 'a' + 1;  ///uncomment it for only lowercase letters
        while(!p->next[c])
            p = p->next[0];
        p = p->next[c];
        p->cnt++;
    }
}

int DFS(NODE *p)
{
    if(p->vis) return p->cnt;
    for(int i = 0; i < (int)p->out.size(); i++)
        p->cnt += DFS(p->out[i]);
    p->vis = true;
    return p->cnt;
}


int main()
{
    sc("%s",text);
    scin(n);
    for(int i = 0; i < n; i++){
        sc("%s",dictionary[i]);
    }
    buildtrie();
    aho_corasick();
    for(int i = 0; i < n; i++)
    {
        NODE *p = root;
        for(int j = 0; dictionary[i][j]; j++)
        {
            char c = dictionary[i][j];
            p = p->next[c];
        }
        int x = DFS(p);
        if(x==0) pf("N\n");
        else pf("Y\n");
    }
    delete root;
    return 0;
}
