#include<iostream>
#include<cstdio>
#include<cmath>

int mark[1000001];

void Prime()
{
    int i,j,limit=1002;
    for(i=4;i<=1000000;i+=2)
        mark[i]=1;
    for(i=3;i<=limit;i+=2)
    {
        if(!mark[i])
        {
            for(j=i*i;j<=1000000;j+=i*2)
                mark[j]=1;
        }
    }
}

int isPal(int n)
{
    int i,x,y,digit;
    x=n;
    for(digit=1;;digit++)
    {
        x/=10;
        if(x==0)
            break;
    }
    int ar[digit];
    x=n;
    for(i=0;i<digit;i++)
    {
        y=x/pow(10.0,(digit-i-1.0));
        ar[i]=y;
        x-=y*pow(10.0,(digit-i-1.0));
    }
    y=1;
    for(i=0;i<=(digit/2);i++)
    {
        if(ar[i]!=ar[digit-1-i])
        {
            y=0;
            break;
        }
    }
    return y;
}

int main()
{
    Prime();
    int n;
    long long int x;
    while(1)
    {
        scanf("%d",&n);
        x=n*2;
        printf("%lld\n",x);
        if(mark[n]==0&&isPal(n)==1)
            break;
    }
    return 0;
}

