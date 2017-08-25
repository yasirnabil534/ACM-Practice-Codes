#include<stdio.h>
#include<math.h>

int main()
{
    double m,n,a,i,k=1,t,r;
    scanf("%lf %lf %lf",&m,&n,&a);
    t=m*n;
    i=ceil(m/a);
    k=ceil(n/a);
    printf("%.0lf\n",i*k);
    return 0;
}
