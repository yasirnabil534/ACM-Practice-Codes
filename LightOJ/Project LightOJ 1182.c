#include<stdio.h>

int main()
{
    int n,t,i,j,p,sum;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        j=0;
        scanf("%d",&n);
        while(n!=0)
        {
            p=n%2;
            n=n/2;
            j+=p;
        }
        if(j%2==0)
            printf("Case %d: even\n",i);
        else
            printf("Case %d: odd\n",i);
    }
    return 0;
}
