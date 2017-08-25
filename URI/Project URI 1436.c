#include<stdio.h>

int main()
{
    int i,j,t,p,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&p);
        int ar[p];
        r=(p-1)/2;
        for(j=0;j<p;j++)
        {
            scanf("%d",&ar[j]);
        }
        printf("Case %d: %d\n",i,ar[r]);
    }
    return 0;
}
