#include <stdio.h>

int main() {

    int i,n,x,s,j,c;
    scanf("%d",&c);
    for(j=1;j<=c;j++)
    {
        s=0;
        scanf("%d %d",&n,&x);
        if(n%2==0)
        {
            n++;
        }
        for(i=1;i<=x;i++)
        {
            s+=n;
            n+=2;
        }
        printf("%d\n",s);
    }

    return 0;
}
