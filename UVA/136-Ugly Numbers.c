#include<stdio.h>
#include<math.h>

long long int pr[100000000];



long long int isprime(long long int x,long long int pr[],long long int n)
{
    long long int i;
    /**if(x<pr[prime])
    {
        for(i=0;i<prime;i++)
        {
            if(pr[i]==x)
                return 1;
            else
                return 0;
        }
    }*/
    if(x%2==0&&x!=2)
        return 0;
    for(i=0;i<n;i+=1)
    {
        if(x%pr[i]==0)
            return 0;
    }
    return 1;
}

int main()
{
    long long int count=6,i,j,suc=0,prime=3;
    pr[0] = 2;
    pr[1] = 3;
    pr[2] = 5;
    for(i=7;;i++)
    {
        suc=0;
        if(isprime(i,pr,prime))
            pr[prime++]=i;
        if((i%2==0||i%3==0||i%5==0))
        {
            for(j=3;j<prime;j++)
            {
                if(i%pr[j]==0)
                    suc=1;
            }
            if(suc==0)
            {
                count++;
                printf("%lld\t%lld\n",i,count);
            }
        }
        if(count==1500)
            break;
    }
    printf("The 1500'th ugly number is %lld\n",i);
    return 0;
}
