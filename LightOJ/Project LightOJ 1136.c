#include<stdio.h>

int main()
{
    long long int a,b,i,am,bm,x,y,res,cas;
    scanf("%lld",&cas);
    for(i=1;i<=cas;i++)
    {
        scanf("%lld %lld",&a,&b);
        am=a%3;
        bm=b%3;
        if(am==1)
            x=((a-1)*2)/3;
        else if(am==0)
            x=(2*a)/3;
        else if(am==2)
            x=(((a+1)*2)/3)-1;
        if(bm==1)
            y=((b-1)*2)/3;
        else if(bm==0)
            y=(2*b)/3;
        else if(bm==2)
            y=(((b+1)*2)/3)-1;
        if(am==1)
        {
            res=y-x;
        }
        else if(am==0||am==2)
        {
            res=y-x+1;
        }
        printf("Case %lld: %lld\n",i,res);
    }
    return 0;
}
