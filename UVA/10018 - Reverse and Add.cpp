#include<iostream>
#include<cstdio>
#include<cmath>
#include<string>

long long int revrs(long long int n)
{
    long long int i,j,x,m,rev=0;
    m=n;
    for(x=1;;x++)
    {
        rev+=(m%10);
        m/=10;
        if(m==0)
            break;
        rev*=10;
    }
    return rev;
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int n,i,j,rn,sum;
        scanf("%lld",&n);
        i=0;
        do
        {
            rn = revrs(n);
            sum = rn+n;
            i++;
            n=sum;
        }
        while(sum!=revrs(sum));
        printf("%lld %lld\n",i,sum);
    }
    return 0;
}
