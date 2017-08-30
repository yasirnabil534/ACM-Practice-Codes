#include<iostream>
#include<cstdio>
#include<cmath>

long long int GCD(long long int a,long long int b)
{
    long long int x;
    if(b==0)
        x = a;
    else
        x = GCD(b,a%b);
    return x;
}

int main()
{
    long long int a,b,x;
    while(1)
    {
        long long int i,j,k,p,q,lb=1,hr=1,gcd=1,mul=1;
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)
            break;
        p = (b<(a-b))?b:(a-b);
        long long int ar[p],lr[p];
        for(i=0;i<p;i++)
            ar[i]=i+1;
        for(i=a,j=0;j<p;j++,i--)
        {
            lr[j]=i;
        }
        for(j=0;j<p;j++)
        {
            lb=lr[j];
            for(k=p-1;k>=0;k--)
            {
                hr=ar[k];
                if(lb>=hr)
                    gcd = GCD(lb,hr);
                else
                    gcd = GCD(hr,lb);
                lb/=gcd;
                hr/=gcd;
                ar[k] = hr;
                lr[j] = lb;
            }
        }
        for(i=0;i<p;i++)
            mul*=lr[i];
        printf("%lld things taken %lld at a time is %lld exactly.\n",a,b,mul);
    }
    return 0;
}
