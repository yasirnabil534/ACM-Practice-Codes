#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int r,i,j,n=0,p,q;
        scanf("%d",&r);
        int s[r];
        for(i=0;i<r;i++)
            scanf("%d",&s[i]);
         for(i=0;i<r;i++)
        {
            for(j=i+1;j<r;j++)
            {
                if(s[i]>s[j])
                {
                    p=s[i];
                    s[i]=s[j];
                    s[j]=p;
                }
            }
        }
        for(j=0;j<r;j++)
        {
            n=0;
            for(i=0;i<r;i++)
                n+= abs(s[j]-s[i]);
            if(j==0)
                q=n;
            if(n<q)
                q=n;
        }
        printf("%d\n",q);
    }
    return 0;
}
