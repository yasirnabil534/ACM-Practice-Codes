#include <stdio.h>

int main() {

    int a=0,b=1,i,j=0,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i<=n-2)
        {
            printf("%d ",a);
            sum=a+b;
            a=b;
            b=sum;
        }
        else if(i==n-1)
        {
            printf("%d\n",a);
            sum=a+b;
            a=b;
            b=sum;
        }
    }
    return 0;
}
