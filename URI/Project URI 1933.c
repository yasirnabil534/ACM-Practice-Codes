#include<stdio.h>

int main()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    if(a==b)
        n=a;
    if(a>b)
        n=a;
    if(a<b)
        n=b;
    printf("%d\n",n);
    return 0;
}
