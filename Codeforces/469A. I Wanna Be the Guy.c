#include<stdio.h>

int main()
{
    int n,p,q,i,j,ans=0;
    scanf("%d %d",&n,&p);
    int e[n+1];
    for(i=0;i<=n;i++)
        e[i]=0;
    int a[p];
    for(i=0;i<p;i++)
        scanf("%d",&a[i]);
    scanf("%d",&q);
    int b[q];
    for(i=0;i<q;i++)
        scanf("%d",&b[i]);
    for(j=1;j<=n;j++)
    {
        for(i=0;i<p;i++)
        {
            if(j==a[i]&&e[j]==0)
                e[j]=1;
        }
    }
    for(j=1;j<=n;j++)
    {
        for(i=0;i<q;i++)
        {
            if(j==b[i]&&e[j]==0)
                e[j]=1;
        }
    }
    for(i=1;i<=n;i++)
    {
        if(e[i]==0)
        {
            ans=1;
            break;
        }
    }
    if(ans==0)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");
    return 0;
}
