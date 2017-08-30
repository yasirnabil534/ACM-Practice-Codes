#include<iostream>
#include<cstdio>
#include<cmath>

int main()
{
    int n;
    printf("PERFECTION OUTPUT\n");
    while(1)
    {
        int i,j,sum=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=1;i<n;i++)
        {
            if(n%i==0)
                sum+=i;
        }
        if(sum==n)
            printf("%5d  PERFECT\n",n);
        if(sum<n)
            printf("%5d  DEFICIENT\n",n);
        if(sum>n)
            printf("%5d  ABUNDANT\n",n);
    }
    printf("END OF OUTPUT\n");
    return 0;
}
