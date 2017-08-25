#include <stdio.h>

int main() {

    int X,Z=0,i,j,k=0,m;
    scanf("%d",&X);
    for(i=1;Z<=X;i++)
    {
        scanf("%d",&Z);
    }
    m=X;
    for(j=1;k<=Z;j++)
    {
        k=k+m;
        m++;
    }
    printf("%d\n",j-1);
    return 0;
}
