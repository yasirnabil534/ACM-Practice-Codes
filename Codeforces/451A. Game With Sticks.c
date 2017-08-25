#include<stdio.h>

int main()
{
    int n,m,i,x;
    scanf("%d %d",&n,&m);
    if(n>=1&&m>=1)
    {
        for(i=1;;i++)
        {
            n-=1;
            m-=1;
            if(n==0||m==0)
                break;
        }
        if(i%2==0)
            printf("Malvika\n");
        else
            printf("Akshat\n");
    }
    else
        printf("Malvika\n");
    return 0;
}
