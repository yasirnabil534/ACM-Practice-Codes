#include<stdio.h>
#include<math.h>

int main()
{
    int t,i,j;
    long double r,n,a,pi;
    pi=2*acos(0.0);
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%Lf %Lf",&r,&n);
        a=(r * sin(pi/n))/((1 + sin(pi/n)));
        printf("Case %d: %Lf\n",i,a);
    }
    return 0;
}
