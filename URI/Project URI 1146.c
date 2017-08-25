#include <stdio.h>

int main() {

    int i,n,p,q;
    for(i=1;;i++)
    {
        scanf("%d",&n);
        for(p=1;p<=n;p++)
        {
            printf("%d",p);
            if(p==n)
            {
                printf("\n");
            }
            else
            {
                printf(" ");
            }
        }
        if(n==0)
            break;
    }

    return 0;
}
