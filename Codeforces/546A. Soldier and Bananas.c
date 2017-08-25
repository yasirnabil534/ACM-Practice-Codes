#include<stdio.h>

int main()
{
    int k,n,m,i,res=0;
    scanf("%d %d %d",&k,&n,&m);
    for(i=1;i<=m;i++)
    {
        res+=(k*i);
    }
    if((res-n)<0)
        res=n;
    printf("%d\n",res-n);
    return 0;
}
