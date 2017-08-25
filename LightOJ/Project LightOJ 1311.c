#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double v1,v2,v3,a1,a2,d,b;
        scanf("%lf %lf %lf %lf %lf",&v1,&v2,&v3,&a1,&a2);
        d = ((v1*v1)/(2*a1))+((v2*v2)/(2*a2));
        b = ((v1/a1)>(v2/a2)?(v1/a1):(v2/a2))*v3;
        printf("Case %d: %lf %lf\n",t,d,b);
    }
    return 0;
}
