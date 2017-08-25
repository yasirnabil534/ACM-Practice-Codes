#include<stdio.h>

int power(int x)
{
    int i,n=1;
    for(i=1;i<=x;i++)
        n*=10;
    return n;
}

int main()
{
    int a,b,sum,digit,i,j,num,k;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
            break;
        sum=a+b;
        num=sum;
        for(digit=1;;digit++)
        {
            num/=10;
            if(num==0)
                break;
        }
        for(i=0,k=0;i<digit;i++)
        {
            j=sum%10;
            if(j!=0)
            {
                num+=(j*power(k));
                k++;
            }
            sum/=10;

        }
        printf("%d\n",num);
    }
    return 0;
}
