#include<stdio.h>
#include<math.h>

int main()
{
    long long int t,ts;
    scanf("%lld",&ts);
    for(t=1;t<=ts;t++)
    {
        long long int i,j,n;
        scanf("%lld",&n);
        j=0;
        if(n==1)
            j=1;
        else if(n==2||n==3)
            j=0;
        else if(n%2==0)
            j=1;
        else
        {
            for(i=3;i<=sqrt(n);i+=2)
            {
                if(n%i==0)
                {
                    j=1;
                    break;
                }
            }
        }
        if(j==0)
            printf("Prime\n");
        else if(j==1)
            printf("Not Prime\n");
    }
    return 0;
}
