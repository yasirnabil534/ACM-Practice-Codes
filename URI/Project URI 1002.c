#include <stdio.h>

int main() {

    int x,a,s,d,f,g,h,j,q,w,e,r,t,y;
    scanf("%d",&x);
    a=x/100;
    q=x%100;
    s=q/50;
    w=q%50;
    d=w/20;
    e=w%20;
    f=e/10;
    r=e%10;
    g=r/5;
    t=r%5;
    h=t/2;
    y=t%2;
    j=y/1;
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\n%d nota(s) de R$ 1.00\n",a,s,d,f,g,h,j);

    return 0;
}
