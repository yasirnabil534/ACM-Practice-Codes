#include<bits/stdc++.h>

using namespace std;

int par[26];

void _set(int p)
{
    int x;
    for(x=0;x<26;x++)
        par[x] = 0;
    for(x=0;x<=p;x++)
            par[x] = x;
}

int _find(int r)
{
    if(par[r]==r)
        return r;
    return par[r] = _find(par[r]);
}

void union_set (int u, int v)
{
    int par_of_U,par_of_V;
    par_of_U = _find(u);
    par_of_V = _find(v);
    if(par_of_U!=par_of_V)
    {
        par[par_of_U] = par_of_V;
    }
}

int main()
{
    int t,T;
    scanf("%d",&T);
    getchar();
    getchar();
    for(t=1;t<=T;t++)
    {
        set <int> s;
        //getchar();
        char c,ch[5];
        int u,v,x;
        //cout<<"TAKE IN"<<endl;
        scanf("%c",&c);
        x = c - 'A';
        _set(x);
        //printf("%c\n",c);
        getchar();
        while(gets(ch))
        {
            if(strlen(ch)==0)//(ch[0]<'A'||ch[0]>'Z')
                break;
            u = (ch[0]-'A');
            v = (ch[1]-'A');
            union_set(u,v);
        }
        for(int i=0;i<=x;i++)
            s.insert(_find(par[i]));
        cout<<s.size()<<endl;
        if(t<T) cout<<endl;
    }
    return 0;
}
