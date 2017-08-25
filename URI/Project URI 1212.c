#include<stdio.h>

long int digit(long int x)
{
    long int i;
    for(i=1;; i++)
    {
        x/=10;
        if(x==0)
            break;
    }
    return i;
}

long int power10(long int q)
{
    long int i,s=1;
    for(i=1; i<=q; i++)
    {
        s*=10;
    }
    return s;
}

int main()
{
    long int c;
    for(c=1;;c++)
    {
        long int k,digit1,digit2,i,j,x,y,res=0,t,a,b,p=0;
        while(1)
        {
            scanf("%ld %ld",&a,&b);
            if(a>=0&&b>=0)
                break;
        }
        if(a==0&&b==0)
            break;
        digit1=digit(a);
        digit2=digit(b);
        if(digit1>10||digit2>10)
            continue;
        int ar[digit1],br[digit2];
        for(i=0; i<digit1; i++)
        {
            x=a%power10(i+1);
            y=x/power10(i);
            ar[i]=y;
        }
        for(j=0; j<digit2; j++)
        {
            x=b%power10(j+1);
            y=x/power10(j);
            br[j]=y;
        }
        if(digit1<=digit2)
        {
            ar[i]=0;
            for(i=0; i<=digit1; i++)
            {
                t=ar[i]+br[i]+p;
                if(t>=10)
                {
                    res++;
                    p=1;
                }
                else
                    p=0;
            }
        }
        else
        {
            br[j]=0;
            for(i=0; i<=digit2; i++)
            {
                t=ar[i]+br[i]+p;
                if(t>=10)
                {
                    res++;
                    p=1;
                }
                else
                    p=0;
            }
        }
        if(res>1)
            printf("%ld carry operations.\n",res);
        else if(res==1)
            printf("%ld carry operation.\n",res);
        else if(res==0)
            printf("No carry operation.\n");
    }
    return 0;
}
