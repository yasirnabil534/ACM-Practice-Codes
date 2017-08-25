#include <stdio.h>

int main() {

    int X,Y,i,p=0;
    scanf("%d%d",&X,&Y);

    if(X>Y){
    for(i=Y+1;i<=X;i++)
    {
        if(i%2==1)
        {
            p+=i;
        }
    }
    }
    else if(Y>X){
    for(i=X+1;i<=Y;i++)
    {
        if(i%2==1)
        {
            p+=i;
        }
    }
    }
    printf("%d\n",p);

    return 0;
}
