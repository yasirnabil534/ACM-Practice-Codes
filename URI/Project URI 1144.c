#include <stdio.h>

int main() {

    int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        j=i*i;
        k=i*i*i;
        printf("%d %d %d\n%d %d %d\n",i,j,k,i,j+1,k+1);
    }
    return 0;
}
