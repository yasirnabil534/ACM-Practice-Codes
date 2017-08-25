#include<stdio.h>

int main()
{
    int n,p,e,c=0,i,j;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        scanf("%d %d",&p,&e);
        if((e-p)>=2)
            c++;
    }
    printf("%d\n",c);
    return 0;
}
