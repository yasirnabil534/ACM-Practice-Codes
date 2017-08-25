#include<stdio.h>

int binary(int a)
{
    int i,n=0,ar[10],p=0;
    while(1)
    {
        ar[n]=a%2;
        a=a/2;
        if(a==0)
            break;
        n++;
    }
    for(i=n;i>=0;i--)
    {
        p=p*10;
        p=p+ar[i];
    }
    return p;
}

int main()
{
    int T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int a,b,c,d,aa,bb,cc,dd,a1,b1,c1,d1;
        char ch;
        scanf("%d%c%d%c%d%c%d",&a,&ch,&b,&ch,&c,&ch,&d);
        scanf("%d%c%d%c%d%c%d",&aa,&ch,&bb,&ch,&cc,&ch,&dd);
        a1=binary(a);
        b1=binary(b);
        c1=binary(c);
        d1=binary(d);
        if(aa==a1&&bb==b1&&cc==c1&&dd==d1)
            printf("Case %d: Yes\n",t);
        else
            printf("Case %d: No\n",t);
    }
    return 0;
}
