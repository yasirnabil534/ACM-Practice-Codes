#include<stdio.h>

int main()
{
    int i,j,s,t,n,a=0;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        s=0;
        for(i=1;i<=3;i++)
        {
            scanf("%d",&n);
            s+=n;
        }
        if(s>1)
            a++;
    }
    printf("%d\n",a);
    return 0;
}
