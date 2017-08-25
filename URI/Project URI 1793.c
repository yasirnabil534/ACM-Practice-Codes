#include<stdio.h>

int main()
{
    int i,j,a,b,c,sum;
    for (i=1;i<=30;i++)
    {
        c=0;
        scanf("%d",&a);
        if(a==0)
            break;
        int ara[a];
        for(j=0;j<a;j++)
        {
            scanf("%d",&ara[j]);
        }
        for(j=a-1;j>0;j--)
        {
            b=ara[j]-ara[j-1];
            if(b>10)
                b=10;
            c+=b;
        }
        sum=c+10;
        if(sum<=a*10)
        {
            printf("%d\n",sum);
        }
        else
        {
            printf("%d\n",a*10);
        }
    }
    return 0;
}
