#include<stdio.h>

int main()
{
    double x,z;
    long long int y,i,c,d;
    scanf("%lld",&c);
    for(i=1;i<=c;i++)
    {
        scanf("%lld",&d);
        z=d;
        x=pow(2,z);
        y=x/12000;
        printf("%lld kg\n",y);
    }
    return 0;
}

