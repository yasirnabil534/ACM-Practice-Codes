#include<stdio.h>

int main()
{
    long long int a,s,p,n,j;
    for(j=1;;j++)
    {
        scanf("%lld",&a);
        scanf("%lld",&p);
        if(p>=a&&p<=1000000000&&a<=1000000000&&a>=0)
            break;
    }
    n=(p-a)+1;
    s=(n*(2*a+(n-1)))/2;
    printf("%lld\n",s);
    return 0;
}
