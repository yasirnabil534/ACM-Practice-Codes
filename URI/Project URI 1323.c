#include <stdio.h>

int main()
{
    int i,j,n;
    while(1)
    {
        j=0;
        scanf("%d",&n);
        if(n==0)
            break;
        for(i=0;i<=n;i++)
        {
            j+=(i*i);
        }
        printf("%d\n",j);
    }
    return 0;
}
