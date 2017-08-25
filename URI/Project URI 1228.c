#include<stdio.h>

int main()
{
    int i,j,k,p,n,t;
    while(scanf("%d",&n)!=EOF)
    {
        int a[n],b[n];
        p=0,t=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++)
        {
            scanf("%d",&b[i]);
        }
        for(j=0;j<n;j++)
        {
            t=0;
            for(i=j;i<n;i++)
            {
                if(a[j]!=b[i])
                    t++;
                if(a[j]==b[i])
                {
                    p+=t;
                    break;
                }
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
