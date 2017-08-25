#include<stdio.h>
#define PI 3.1415926535897932384626433832795028841971

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double R,r1,r2,h,p,ans,x;
        scanf("%lf %lf %lf %lf",&r1,&r2,&h,&p);
        x = (r2*h)/(r1-r2);
        R = (r2*p+r2*x)/x;
        ans = (PI/3)*(R*R*p+R*R*x-r2*r2*x);
        printf("Case %d: %.9lf\n",t,ans);
    }
    return 0;
}
