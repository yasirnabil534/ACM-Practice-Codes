#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int n,k,p,r;
    scanf("%I64d %I64d",&n,&k);
    p=n;
    if(n%2==0)
    {
        p/=2;
    }
    else
    {
        p/=2;
        p++;
    }
    if(k<=p)
        r=1+(k-1)*2;
    else
        r=(2+((k-p)-1)*2);
    printf("%I64d\n",r);
    return 0;
}

