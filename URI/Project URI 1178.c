#include <stdio.h>

int main() {

    double N[100],n,m;
    int i,j;
    scanf("%lf",&n);
    m=n;
    for(i=0;i<100;i++)
    {
        N[i]=m;
        printf("N[%d] = %0.4lf\n",i,N[i]);
        m/=2;
    }

    return 0;
}
