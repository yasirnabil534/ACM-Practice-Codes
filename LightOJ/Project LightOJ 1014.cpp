#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int p,l,i,j,n;
        scanf("%d %d",&p,&l);
        vector <int> vt;
        n=p-l;
        printf("Case %d: ",t);
        for(i=1;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                if(i>l)
                    vt.push_back(i);
                if(n/i>l&&n/i!=i)
                    vt.push_back(n/i);
            }
        }
        j=vt.size();
        if(j==0)
            printf("impossible");
        else
        {
            sort(vt.begin(),vt.end());
            for(i=0;i<j;i++)
            {
                if(i!=0)
                    printf(" ");
                printf("%d",vt[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
