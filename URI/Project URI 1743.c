#include<stdio.h>

int main()
{
    int a[5],b[5],i,c=0;
    for(i=0;i<5;i++)
        scanf("%d",&a[i]);
    for(i=0;i<5;i++)
        scanf("%d",&b[i]);
    for(i=0;i<5;i++)
    {
        if(a[i]==b[i])
        {
            c=1;
            break;
        }
    }
    if(c==0)
        printf("Y\n");
    else if(c==1)
        printf("N\n");
    return 0;
}
