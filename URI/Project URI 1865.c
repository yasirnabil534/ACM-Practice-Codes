#include<stdio.h>
#include<string.h>

int main()
{
    int x,n,i,j;
    char t[1000];
    char m[]="Thor";
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        while(1)
        {
            scanf("%s %d",t,&x);
            if(x>0&&x<=25000)
                break;
        }
        if(strcmp(t,m)==0)
            printf("Y\n");
        else
            printf("N\n");
    }
    return 0;
}
