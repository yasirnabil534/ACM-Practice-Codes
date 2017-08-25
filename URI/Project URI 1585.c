#include <stdio.h>

int main() {

    int i,j,x,y,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&x,&y);
        j=x*y/2;
        printf("%d cm2\n",j);
    }

    return 0;
}
