#include<stdio.h>

int main()
{
    int a,i,b,c,p,q;
    while((scanf("%d %d %d",&a,&b,&c))!=EOF&&a>=0&&a<=1&&b>=0&&b<=1&&c>=0&&c<=1)
    {
        if(a==1&&b==1&&c==0)
            printf("C\n");
        else if(c==1&&b==1&&a==0)
            printf("A\n");
        else if(a==1&&c==1&&b==0)
            printf("B\n");
        else if(a==0&&b==0&&c==1)
            printf("C\n");
        else if(c==0&&b==0&&a==1)
            printf("A\n");
        else if(a==0&&c==0&&b==1)
            printf("B\n");
        else
            printf("*\n");
    }
    return 0;
}
