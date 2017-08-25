#include <stdio.h>

int main() {

    int N,X,i,p,q;
    scanf("%d",&N);
    X=N;
    int ara[X];
    for(i=0;i<X;i++)
    {
        scanf("%d",&ara[i]);
    }

    for(i=0;i<X;i++)
    {
        if(ara[i]>=10&&ara[i]<=20)
        {
            p++;
        }
        else
        {
            q++;
        }
    }
    printf("%d in\n%d out\n",p,q);

    return 0;
}
