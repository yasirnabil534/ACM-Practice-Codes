#include<stdio.h>

int main()
{
    int m,n,p=0;
    scanf("%d %d",&n,&m);
    if(m!=1)
        p=((n-1)/(m-1));
    n+=p;
    printf("%d\n",n);
    return 0;
}
