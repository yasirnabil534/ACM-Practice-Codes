#include<stdio.h>

long long int y=0;

long long int fib(long long int x)
{
    long long int z;
    if(x==0)
    {
        ++y;
        return 0;
    }
    else if(x==1)
    {
        ++y;
        return 1;
    }
    else
    {
        ++y;
        return z=fib(x-1)+fib(x-2);
    }
}

int main()
{
    long long int i,j,n,t,f;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);
        f=fib(n);
        printf("fib(%lld) = %lld calls = %lld\n",n,y-1,f);
        y=0;
    }
    return 0;
}
