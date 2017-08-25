#include <stdio.h>

int main() {

    int i,j,n;
    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n>=0)
        break;
    }

    for(i=1;i<=n;i++)
    {
        if(i<n)
        {
            printf("Ho ");
        }
        else if(i==n)
        {
            printf("Ho!\n");
        }
    }

    return 0;
}
