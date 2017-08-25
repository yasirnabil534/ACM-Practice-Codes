#include <stdio.h>

int main() {

    int ara[10];
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<10;i++)
    {
        ara[i]=n;
        printf("N[%d] = %d\n",i,ara[i]);
        n*=2;
    }

    return 0;
}

