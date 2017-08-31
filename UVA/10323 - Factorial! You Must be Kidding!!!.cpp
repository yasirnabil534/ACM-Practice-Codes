#include<iostream>
#include<cstdio>
#include<cmath>

int main()
{
    long long int a,b,n,i,ar[14];
    ar[0]=1;
    ar[1]=1;
    for(i=2;i<=13;i++)
        ar[i]=i*ar[i-1];
    while(scanf("%lld",&n)!=EOF)
    {
        if((n>=0&&n<8)||(n<0&&n%2==0))
            printf("Underflow!\n");
        else if((n>13)||(n<0&&n%2!=0))
            printf("Overflow!\n");
        else
            printf("%lld\n",ar[n]);
    }
    return 0;
}
