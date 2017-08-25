#include<stdio.h>
#include<math.h>

int main()
{
    double a1,a2,a3,b1,b2,b3,n,a,b;
    scanf("%lf %lf %lf %lf %lf %lf %lf",&a1,&a2,&a3,&b1,&b2,&b3,&n);
    a=ceil((a1+a2+a3)/5.0);
    b=ceil((b1+b2+b3)/10.0);
    if(n>=(a+b))
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
