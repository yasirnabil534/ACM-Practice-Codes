#include <stdio.h>

int main() {

    int ara[10];
    int i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<10;i++)
    {
        if(ara[i]<=0)
        {
            ara[i]=1;
        }
        printf("X[%d] = %d\n",i,ara[i]);
    }

    return 0;
}
