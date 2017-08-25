#include<stdio.h>
#include<math.h>

int main()
{
    long long int w,i,j,bol,res,t,n;
    long double a,b,c,d;
    scanf("%lld",&n);
    for(t=1; t<=n; t++)
    {
        bol=0;
        scanf("%lld",&w);
        if(w%2!=0)
            printf("Case %lld: Impossible\n",t);
        else
        {
            for(i=2; i<w; i+=2)
            {
                a=w;
                d=a/i;
                res=d;
                if(d==res)
                {
                    if(res%2!=0)
                    {
                        bol=1;
                    }
                }
                if(bol==1)
                    break;
            }
            if(bol==1)
                printf("Case %lld: %lld %lld\n",t,res,i);
            else
                printf("Case %lld: Impossible\n",t);
        }
    }
    return 0;
}
