#include <stdio.h>

int main() {

    int i,j,r1,r2,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&r1,&r2);
        j=r1+r2;
        printf("%d\n",j);
    }
    return 0;
}
