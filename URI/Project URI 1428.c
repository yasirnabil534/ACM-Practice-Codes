#include<stdio.h>

int main()
{
    int i,t,n,m,r;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&m,&n);
        r=(m/3)*(n/3);
        printf("%d\n",r);
    }
    return 0;
}
