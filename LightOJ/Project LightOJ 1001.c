#include<stdio.h>

int main()
{
    int a,b=0,i,j,k,n,m;
    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n>0&&n<=25)
            break;
    }
    for(i=1;i<=n;i++)
    {
        for(m=0;;m++)
        {
            scanf("%d",&a);
            if(a>=0&&a<=20)
                break;
        }
        if(b>=a||b>10)
            b=0;
        if(a>=10)
            b=10;
        k=a-b;
        printf("%d %d\n",b,k);
        b++;
    }
}
