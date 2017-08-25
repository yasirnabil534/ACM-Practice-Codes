#include<stdio.h>

int main()
{
    int k,m,n,x,y,i,j,a,b;
    while(1)
    {
        scanf("%d",&k);
        if(k==0)
            break;
        scanf("%d %d",&n,&m);
        for(i=1;i<=k;i++)
        {
            scanf("%d %d",&x,&y);
            a=x-n;
            b=y-m;
            if(a==0||b==0)
                printf("divisa\n");
            else if(a>0&&b>0)
                printf("NE\n");
            else if(a>0&&b<0)
                printf("SE\n");
            else if(a<0&&b>0)
                printf("NO\n");
            else if(a<0&&b<0)
                printf("SO\n");
        }
    }
    return 0;
}
