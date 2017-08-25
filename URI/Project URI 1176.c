#include <stdio.h>

int main() {

    long long int a,b,i,t,k,n,sum,ar[61];
    scanf("%lld",&t);
    for(k=1;k<=t;k++)
    {
        scanf("%lld",&n);
        a=0;
        b=1;
        sum=0;
        for(i=0;i<=n;i++)
        {
            ar[i]=a;
            sum=a+b;
            a=b;
            b=sum;
        }
        printf("Fib(%lld) = %lld\n",i-1,ar[i-1]);
    }
    return 0;
}
