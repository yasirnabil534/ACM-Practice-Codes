#include <stdio.h>

int main()
{
    int t,x1,x2,y1,y2,x,y,m,i,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf(" %d %d %d %d",&x1,&y1,&x2,&y2);
        scanf(" %d",&m);
        printf("Case %d:\n",j);
        for(i=1;i<=m;i++)
        {
            scanf(" %d %d",&x,&y);
            if(x>=x1&&x<=x2&&y>=y1&&y<=y2)
                printf("Yes\n",j);
            else
                printf("No\n",j);
        }
    }
    return 0;
}
