#include<stdio.h>

int main() {
    long long int n, caseno = 0, cases,i=6,j;
    long long int a[100000];
    scanf("%lld", &cases);
    while( cases-- ) {
        for(j=0;;j++)
        {
            scanf("%lld %lld %lld %lld %lld %lld %lld", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &n);
            if(n>=0&&a[0]>=0&&a[1]>=0&&a[2]>=0&&a[3]>=0&&a[4]>=0&&a[5]>=0)
                break;
        }
        if(n<=5)
            j=a[n]%10000007;
        else
        {
            for(i=6;;i++)
            {
                a[i]=a[i-1] % 10000007+a[i-2] % 10000007+a[i-3] % 10000007+a[i-4] % 10000007+a[i-5] % 10000007+a[i-6] % 10000007;
                if(i==n)
                    break;
            }
            j=a[i] % 10000007;
        }
        printf("Case %lld: %lld\n", ++caseno, j);
    }
    return 0;
}
