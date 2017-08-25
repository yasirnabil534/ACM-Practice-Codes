#include<stdio.h>

int main()
{
    int i,n,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
            n/=2;
        else if(n%2!=0)
            n=(n/2)+1;
        printf("%d\n",n);
    }
}
