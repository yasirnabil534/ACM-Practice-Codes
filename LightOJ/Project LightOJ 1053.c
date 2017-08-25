#include <stdio.h>

int main()
{
    long long int t,i,a,b,c,d,e,f;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>=b)
        {
            if(a>=c)
            {
                f=a;
                e=b;
                d=c;
            }
            else
            {
                f=c;
                e=b;
                d=a;
            }
        }
        else if(b>=a)
        {
            if(b>=c)
            {
                f=b;
                e=a;
                d=c;
            }
            else
            {
                f=c;
                e=a;
                d=b;
            }
        }
        if(f*f==(d*d+e*e))
        {
            printf("Case %lld: yes\n",i);
        }
        else
        {
            printf("Case %lld: no\n",i);
        }
    }
    return 0;
}
