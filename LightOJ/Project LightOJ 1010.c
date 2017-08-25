#include<stdio.h>

int main()
{
    long int a,b,i,n,sum,gum;
    scanf("%ld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%ld %ld",&a,&b);
        if(a==1||b==1||(a==2&&b==2))
            sum=a*b;
        else if((a==2||b==2)&&(((a*b)%8==2)||((a*b)%8==4)))
        {
            sum=((a*b)%8)+(((a*b)/8)*4);
        }
        else if((a==2||b==2)&&(((a*b)%8==6)))
        {
            if(a>=b)
                sum=(((a-1)*b)%8)+((((a-1)*b)/8)*4);
            else
                sum=(((b-1)*a)%8)+((((b-1)*a)/8)*4);
        }
        else if((a==2||b==2)&&(((a*b)%8==0)))
        {
            if(a>=b)
                sum=(((a-2)*b)%8)+((((a-2)*b)/8)*4);
            else
                sum=(((b-2)*a)%8)+((((b-2)*a)/8)*4);
        }
        else
        {
            gum=a*b;
            sum=(gum/2.0)+.5;
        }
        printf("Case %ld: %ld\n",i,sum);
    }
    return 0;
}
