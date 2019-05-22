/// Floyd Warshell Algorithm for Graph

int MAT[105][105];
set <int> ST;
vi vc;

void floyd_warshell()
{
    vc.insert(vc.begin(),all(ST));
    for(int i = 0; i < (int)vc.size(); i++) MAT[vc[i]][vc[i]] = 0;
    for(int k = 0 ; k < (int)vc.size(); k++)
    {
        for(int i = 0; i < (int)vc.size(); i++)
        {
            for(int j = 0; j < (int)vc.size(); j++)
            {
                if(MAT[vc[i]][vc[j]] > MAT[vc[i]][vc[k]] + MAT[vc[k]][vc[j]])
                {
                    MAT[vc[i]][vc[j]] = MAT[vc[i]][vc[k]] + MAT[vc[k]][vc[j]];
                }
            }
        }
    }
}

int main()
{
    int a,b, tc = 1;
    while(1)
    {
        sc("%d %d",&a,&b);
        if(a == 0 && b == 0) break;
        for(int i = 0; i < 105; i++)
            for(int j = 0; j < 105; j++)
                MAT[i][j] = 1000000;
        ST.clear(); vc.clear();
        while(1)
        {
            if(a == 0 && b == 0) break;
            ST.insert(a);
            ST.insert(b);
            MAT[a][b] = 1;
            sc("%d %d",&a,&b);
        }
        floyd_warshell();
        double tot = 0.0;
        for(int i = 0; i < vc.size(); i++)
        {
            for(int j = 0; j < vc.size(); j++)
            {
                tot += MAT[vc[i]][vc[j]];
            }
        }
        double permute = (double)vc.size();
        permute *= (permute - 1);
        pf("Case %d: average length between pages = %.3f clicks\n",tc++, tot/permute);
    }
    return 0;
}
