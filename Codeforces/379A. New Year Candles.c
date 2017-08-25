#include<stdio.h>

int power(int m,int n)
{
    int mul=1,i;
    for(i=1;i<=n;i++)
        mul*=m;
    return mul;
}

int main()
{
    int x,y,m=0,p=1,i,d=0,div=0;
    scanf("%d %d",&x,&y);
    for(i=0;;i++)
    {
        p=(x/power(y,i));
        //printf("%d-",p);
        d+=(p%y);
        //printf("%d-",d);
        m+=p;
        //printf("%d\n",m);
        if(p==0)
            break;
    }
    while(1)
    {
        p=d%y;
        d/=y;
        div+=d;
        if(d==0)
            break;
        d+=p;
    }
    m+=div;
    printf("%d\n",m);
    return 0;
}
