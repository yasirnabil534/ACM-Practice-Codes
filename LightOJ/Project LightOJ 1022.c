#include <stdio.h>
#include <math.h>

int main()
{
    int i,t;
    long double n,dif,pi;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%Lf",&n);
        pi=2*acos(0.0);
        dif=((2*n)*(2*n))-(pi*n*n);
        printf("Case %d: %.2Lf\n",i,dif+0.000000001);
    }
    return 0;
}
