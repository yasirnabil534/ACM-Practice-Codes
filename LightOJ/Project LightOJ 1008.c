#include <stdio.h>
#include <math.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int a, p, x, y, temp;
        scanf("%lld",&a);
        p = ceil((double)sqrt(a));
        if(p*p-a<p)
        {
            x = p*p-a+1;
            y = p;
        }
        else
        {
            y = -p*p+2*p+a-1;
            x = p;
        }
        if(!(p&1))
        {
            temp=x;
            x=y;
            y=temp;
        }
        printf("Case %d: %lld %lld\n",t,x,y);
    }
    return 0;
}


