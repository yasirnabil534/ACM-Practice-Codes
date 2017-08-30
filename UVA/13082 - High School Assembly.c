#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int i,n,count=1;
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }
        for(i=0;i<n;i++)
        {
            if(ar[i]==count)
            {
                count++;
            }
        }
        printf("Case %d: %d\n",t,(n-count+1));
    }
    return 0;
}
