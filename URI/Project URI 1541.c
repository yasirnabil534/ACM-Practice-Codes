#include <stdio.h>
#include <math.h>

int main() {

    int a,b,c,i,j,k;
    for(i=1;;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
        else
        {
            scanf(" %d %d",&b,&c);
            j=(100*a*b/c);
            k=sqrt(j);
            printf("%d\n",k);
        }
    }

    return 0;
}
