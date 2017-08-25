#include <stdio.h>
#include <math.h>

int main() {

    int i,x1,x2,y1,y2,n,a,b;
    for(i=1;;i++)
    {
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        if(x1==0&&y1==0&&x2==0&&y2==0)
        {
            break;
        }
        else if(x1==x2&&y1==y2)
        {
            n=0;
        }
        else if(x1==x2||y1==y2)
        {
            n=1;
        }
        else if((abs(x1-x2))==(abs(y1-y2)))
        {
            n=1;
        }
        else
        {
            n=2;
        }
        printf("%d\n",n);
    }

    return 0;
}
