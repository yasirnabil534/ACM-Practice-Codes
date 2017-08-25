#include<stdio.h>

int main()
{
    long long int cas,i,j,a,b,num,p,m,c,d;
    scanf("%lld",&cas);
    for(p=1;p<=cas;p++)
    {
        scanf("%lld %lld",&a,&b);
        m=(a*(a+1)/2.0);
        m=(m%3==0);
        i=((a-1)-((a-1)/3));
        j=((b-1)-((b-1)/3));
        num=j-i+m;
        printf("Case %lld: %lld\n",p,num);
    }
    return 0;
}
