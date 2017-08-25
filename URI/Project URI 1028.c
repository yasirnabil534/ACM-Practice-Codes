#include<stdio.h>

int gcd(int x,int y)
{
    int i,j;
    while(1)
    {
        i=x%y;
        if(i==0)
        {
            j=y;
            break;
        }
        x=y;
        y=i;
    }
    return j;
}

int main()
{
    int t,i,j,k,n,a,b;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&a,&b);
        n=gcd(a,b);
        printf("%d\n",n);
    }
    return 0;
}
