#include <stdio.h>

int main() {

    int i,n;
    for(i=1;(scanf("%d",&n))!=EOF;i++)
    {
        if(n==0)
        {
            printf("vai ter copa!\n");
        }
        else if(n!=0)
        {
            printf("vai ter duas!\n");
        }
    }

    return 0;
}
