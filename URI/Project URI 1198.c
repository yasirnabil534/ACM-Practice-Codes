#include <stdio.h>

int main() {

    long long int m,n,i,j,k;
    for(j=1;(scanf("%lld %lld",&m,&n))!=EOF;j++)
    {
        if(m>=n)
        {
            i=m;
            k=n;
        }
        else if(m<n)
        {
            i=n;
            k=m;
        }
        printf("%lld\n",i-k);
    }
    return 0;
}
