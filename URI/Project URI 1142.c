#include <stdio.h>

int main() {

    int i,j,n,k=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=4;j++)
        {
            if(k%4==0)
            {
                printf("PUM\n");
            }
            else
            {
                printf("%d ",k);
            }
            k++;
        }

    }

    return 0;
}
