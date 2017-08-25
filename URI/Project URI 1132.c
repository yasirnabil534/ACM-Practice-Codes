#include <stdio.h>

int main() {

    int x,y,a,b,i,sum=0;
    scanf("%d %d",&x,&y);
    if(x<y)
    {
        a=x;
        b=y;
    }
    else if(y<x)
    {
        a=y;
        b=x;
    }
    for(i=a;i<=b;i++)
    {
        if(i%13!=0)
        {
            sum+=i;
        }
    }
    printf("%d\n",sum);

    return 0;
}
