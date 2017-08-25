#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,m,x,y;
    char a[21],b[21],c[]="ingles";
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {

        scanf("%d",&m);
        scanf("%s",a);
        x=0;
        for(i=2;i<=m;i++)
        {
            scanf("%s",b);
            y=strcmp(a,b);
            if(y!=0)
            {
                x++;
            }
        }
        if(x==0)
        {
            printf("%s\n",a);
        }
        else if(x>0)
        {
            printf("%s\n",c);
        }
    }
    return 0;
}
