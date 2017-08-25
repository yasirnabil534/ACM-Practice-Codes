#include<stdio.h>

int greater(int x,int y)
{
    int z;
    if(x<y)
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    z=x;
    return z;
}

int smaller(int x,int y)
{
    int z;
    if(x<y)
    {
        x=x+y;
        y=x-y;
        x=x-y;
    }
    z=y;
    return z;
}

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
    int a,b,c,g,s,m,n;
    while((scanf("%d %d %d",&a,&b,&c))!=EOF)
    {
        g=greater(a,b);
        g=greater(g,c);
        s=smaller(a,b);
        s=smaller(s,c);
        m=(a+b+c)-(g+s);
        n=gcd(m,s);
        n=gcd(g,m);
        if((g*g==m*m+s*s)&&n!=1)
            printf("tripla pitagorica\n");
        else if((g*g==m*m+s*s)&&n==1)
            printf("tripla pitagorica primitiva\n");
        else
            printf("tripla\n");
    }
    return 0;
}
