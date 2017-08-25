#include <stdio.h>

int main() {

    int x,y,a,b,i;
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
    for(i=a+1;i<b;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }


    return 0;
}

