#include<stdio.h>

int gcd(int x,int y)
{
    int i;
    while(1)
    {
        i=y;
        y=x%y;
        if(y==1)
        {
            return 1;
            break;
        }
        else if(y==0)
        {
            return i;
        }
        x=i;
    }
}

int main()
{
    int m=1,n,i,j,a,b,c=0;
    scanf("%d %d %d",&a,&b,&n);
    while(1)
    {
        if(n==0)
            break;
        if(m==1)
        {
            i=gcd(n,a);
            //printf("gcd(%d,%d)=%d--c=%d\n",a,n,i,c);
            n-=i;
            m=0;
            c++;
        }
        else if(m==0)
        {
            j=gcd(n,b);
            //printf("gcd(%d,%d)=%d--c=%d\n",b,n,j,c);
            n-=j;
            m=1;
            c++;
        }
    }
    printf("%d\n",c%2==0);
    return 0;
}
