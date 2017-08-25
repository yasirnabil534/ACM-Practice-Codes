#include<stdio.h>

int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if((a+b>c&&a+c>b&&b+c>a)||(a+b>d&&a+d>b&&b+d>a)||(c+b>d&&c+d>b&&b+d>c)||(a+c>d&&a+d>c&&c+d>a))
        printf("S\n");
    else
        printf("N\n");
    return 0;
}
