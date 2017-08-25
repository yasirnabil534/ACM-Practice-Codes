#include<stdio.h>
#include<math.h>

int main()
{
    double m,n,i,temp,k;
    int j,p;
    scanf("%lf %lf",&m,&n);
    if(n>m)
    {
        temp=m;
        m=n;
        n=temp;
    }
    i=m/2;
    j=i;
    temp=i-j;
    k=n*temp;
    p=k;
    printf("%.0lf\n",(n*j+p));
    return 0;
}
