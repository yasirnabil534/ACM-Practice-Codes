#include <stdio.h>

int main() {

    int y,m,d,x,a;
    scanf("%d",&x);
    y=x/365;
    a=x%365;
    m=a/30;
    d=a%30;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);


    return 0;
}
