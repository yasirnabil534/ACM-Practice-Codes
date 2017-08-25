#include <stdio.h>

int main() {

    int a,b,i,j,n;
    for(j=1;(scanf("%d %d",&a,&b))!=EOF;j++)
    {
        n=(((~a)&b)|(a&(~b)));
        printf("%d\n",n);
    }

    return 0;
}
