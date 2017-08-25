#include<stdio.h>
#include<math.h>
#define PI 3.141592654

int main()
{
    double a,b,c,res;
    while((scanf("%lf %lf %lf",&a,&b,&c))!=EOF)
    {
        res=5.0*((tan((a*PI)/180.0)*b)+c);
        printf("%.2lf\n",res);
    }
    return 0;
}
