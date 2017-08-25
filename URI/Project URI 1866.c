#include <stdio.h>

int main() {

    int test,i,a,p;
    scanf("%d",&test);
    for(i=1;i<=test;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
            p=0;
        else
            p=1;
        printf("%d\n",p);
    }
    return 0;
}
