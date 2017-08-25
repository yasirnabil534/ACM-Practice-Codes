#include <stdio.h>

int main()
{
    int n,a=0,b=0,i,j,p;
    for(j=1;;j++)
        {
            scanf("%d",&n);
            if(n>=4&&n<=233000)
                break;
        }
    for(i=1;i<=n;i++)
    {
        for(j=1;;j++)
        {
            scanf("%d",&p);
            if(p>=0&&p<=1)
                break;
        }
        if(p==1)
            a++;
        else if(p==0)
            b++;
    }
    if(a>=b)
        printf("N\n");
    else
        printf("Y\n");
    return 0;
}
