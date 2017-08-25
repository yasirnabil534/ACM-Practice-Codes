#include<stdio.h>

int main()
{
    int v,t,n,i;
    for(i=1;(scanf("%d %d",&v,&t))!=EOF;i++)
    {
        n=2*v*t;
        printf("%d\n",n);
    }
    return 0;
}
