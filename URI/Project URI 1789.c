#include <stdio.h>

int main() {

    int i,k,m,n,max;
    for(k=1;(scanf("%d",&m))!=EOF;k++)
    {
        max=0;
        int ara[m];
        for(i=0;i<m;i++)
        {
            scanf("%d",&ara[i]);
            if(ara[i]>max)
            {
                max=ara[i];
            }
        }
        if(max>=20)
        {
            n=3;
        }
        else if(max>=10 && max<20)
        {
            n=2;
        }
        else if(max<10)
        {
            n=1;
        }
        printf("%d\n",n);
    }

    return 0;
}
