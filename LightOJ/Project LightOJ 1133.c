#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        int n,m,i,j,x,y,p;
        scanf("%d %d",&n,&m);
        int ar[n];
        char ch;
        for(i=0; i<n; i++)
            scanf("%d",&ar[i]);
        //getchar();
        for(i=1; i<=m; i++)
        {
            getchar();
            scanf("%c",&ch);
            if(ch=='S')
            {
                scanf("%d",&x);
                for(j=0; j<n; j++)
                    ar[j]=ar[j]+x;
            }
            else if(ch=='M')
            {
                scanf("%d",&x);
                for(j=0; j<n; j++)
                    ar[j]=ar[j]*x;
            }
            else if(ch=='D')
            {
                scanf("%d",&x);
                for(j=0; j<n; j++)
                    ar[j]=ar[j]/x;
            }
            else if(ch=='R')
            {
                for(j=0; j<n/2; j++)
                {
                    x=ar[j];
                    ar[j]=ar[n-j-1];
                    ar[n-j-1]=x;
                }
            }
            else if(ch=='P')
            {
                scanf("%d %d",&x,&y);
                j=ar[x];
                ar[x]=ar[y];
                ar[y]=j;
            }
        }
        printf("Case %d:\n",t);
        for(p=0; p<n; p++)
        {
            if(p<n-1)
                printf("%d ",ar[p]);
            if(p==n-1)
                printf("%d\n",ar[p]);
        }
    }
    return 0;
}
