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
    int t,i,j1,j2,n1,n2,n3,n4,sum,mul,dif,div;
    char ch1,ch2,ch3,s1,s2,s3,s4,s5,s6;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %c %d %c %d %c %d",&n1,&ch1,&n2,&ch2,&n3,&ch3,&n4);
        if(ch2=='+')
        {

            sum=(((double)n1*n4)+((double)n2*n3));
            div=((double)n2*n4);
            mul=gcd(sum,div);
            printf("%d/%d = %d/%d\n",sum,div,(sum/mul),(div/mul));
        }
        else if(ch2=='-')
        {
            sum=(((double)n1*n4)-((double)n2*n3));
            div=((double)n2*n4);
            mul=gcd(sum,div);
            if((mul)<0)
                printf("%d/%d = %d/%d\n",sum,div,(sum/mul)*(-1),(div/mul)*(-1));
            else
                printf("%d/%d = %d/%d\n",sum,div,(sum/mul),(div/mul));
        }
        else if(ch2=='*')
        {
            sum=((double)n1*n3);
            div=((double)n2*n4);
            mul=gcd(sum,div);
            printf("%d/%d = %d/%d\n",sum,div,(sum/mul),(div/mul));
        }
        else if(ch2=='/')
        {
            sum=((double)n1*n4);
            div=((double)n2*n3);
            mul=gcd(sum,div);
            printf("%d/%d = %d/%d\n",sum,div,(sum/mul),(div/mul));
        }
    }

}
