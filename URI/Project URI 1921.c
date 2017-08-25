#include<stdio.h>

int main()
{
    long long int i,n;
    scanf("%lld",&n);
    i=(n*(n-1)/2.0)-n;
    printf("%lld\n",i);
    return 0;
}
