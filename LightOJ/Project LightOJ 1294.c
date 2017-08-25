#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int i,m,n,sum=0;
        scanf("%lld %lld",&n,&m);
        sum=(n*m)/2;
        printf("Case %d: %lld\n",t,sum);
    }
    return 0;
}
