#include <stdio.h>

int main() {

    double n;
    int x,k,a1,s1,d1,f1,g1,h1,j1,q1,w1,e1,r1,t1,y1,s2,d2,f2,g2,h2,j2,w2,e2,r2,t2;
    scanf("%lf",&n);
    x=n;
    k=(n-x)*100;
    a1=x/100;
    q1=x%100;
    s1=q1/50;
    w1=q1%50;
    d1=w1/20;
    e1=w1%20;
    f1=e1/10;
    r1=e1%10;
    g1=r1/5;
    t1=r1%5;
    h1=t1/2;
    y1=t1%2;
    j1=y1/1;
    s2=k/50;
    w2=k%50;
    d2=w2/25;
    e2=w2%25;
    f2=e2/10;
    r2=e2%10;
    g2=r2/5;
    t2=r2%5;
    h2=t2/1;

    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n",a1,s1,d1,f1,g1,h1,j1,s2,d2,f2,g2,h2);

    return 0;
}



