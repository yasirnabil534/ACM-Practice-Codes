#include<stdio.h>

long long int factorial(long long int a)
{
    long long int p=1,i;
    for(i=1;i<=a;i++)
        p=p*i;
    return p;
}

int main()
{
    long long int t,T,l,ar[21];
    for(l=0;l<=20;l++)
        ar[l]=factorial(l);
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        long long int x,i,j,s=0,sum=0,baki;
        scanf("%lld",&x);
        for(i=0;i<=x;i++)
        {
            if(ar[i]>x)
            {
                i--;
                break;
            }
        }
        for(l=1;l<=x;l++)
        {
            for(j=1;j<=x;j++)
            {
                if(ar[l]+ar[j]==x)
                {
                    s=1;
                    break;
                }
                else if(ar[l]+ar[j]>x)
                {
                    s=2;
                    break;
                }
            }
            if(s==1)
                break;
        }
        if(s!=1)
            printf("Case %lld: impossible\n",t);
        else
        {
            printf("Case %lld: %lld!+%lld!\n",t,l,j);
            /**for(j=1;j<=i;j++)
            {
                if(j<i)
                    printf("%lld!+",j);
                else
                    printf("%lld!\n",j);
            }*/
        }
    }
    return 0;
}
