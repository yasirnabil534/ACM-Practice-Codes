#include <stdio.h>

int main() {

    int i,j,x,s;
    for(j=1;;j++)
    {
        s=0;
        scanf("%d",&x);
        if(x==0)
        {
            break;
        }
        if(x%2!=0)
        {
            x++;
        }
        for(i=1;i<=5;i++)
        {
            s+=x;
            x+=2;
        }
        printf("%d\n",s);
    }
    return 0;
}

