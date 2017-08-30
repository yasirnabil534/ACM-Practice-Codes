#include<stdio.h>

int main()
{
    long long int i,j,n,x,y,ar[5001];
    ar[0]=0;
    ar[1]=1;
    for(i=2;i<=5000;i++)
    {
        ar[i]=ar[i-1]+ar[i-2];
    }
    while(scanf("%lld",&n)!=EOF)
    {
        printf("The Fibonacci number for %lld is %lld\n",n,ar[n]);
    }
    return 0;
}
