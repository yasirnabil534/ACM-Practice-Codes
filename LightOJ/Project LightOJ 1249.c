#include<stdio.h>
#include<string.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int i,j,n,m;
        scanf("%d",&n);
        char ch[n][1000],tem[1000];
        int ln[n],wd[n],h[n],v[n],temp;
        for(i=0;i<n;i++)
        {
            scanf(" %s %d %d %d",ch[i],&ln[i],&wd[i],&h[i]);
            v[i] = ln[i]*h[i]*wd[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(v[i]>v[j])
                {
                    temp=v[i];
                    v[i]=v[j];
                    v[j]=temp;
                    strcpy(tem,ch[i]);
                    strcpy(ch[i],ch[j]);
                    strcpy(ch[j],tem);
                }
            }
        }
        if(v[0]==v[n-1])
            printf("Case %d: no thief\n",t);
        else
            printf("Case %d: %s took chocolate from %s\n",t,ch[n-1],ch[0]);
    }
    return 0;
}
