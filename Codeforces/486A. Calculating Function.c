#include<stdio.h>


int main()
{
    long long int i,n,sum=0;
    scanf("%I64d",&n);
    if(n%2==0)
        sum=n/2;
    else
        sum=(-1)*(n+1)/2;
    printf("%I64d\n",sum);
    return 0;
}
