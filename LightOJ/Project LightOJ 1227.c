#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,p,q,i,w=0,s;
        scanf("%d %d %d",&n,&p,&q);
        int ar[n];
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        if(n>=p)
            s=p;
        else
            s=n;
        for(i=0;i<s;i++)
        {
            w+=ar[i];
            if(w>q)
                break;
        }
        printf("Case %d: %d\n",t,i);
    }
    return 0;
}
