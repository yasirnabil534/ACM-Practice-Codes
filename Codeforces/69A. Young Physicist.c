#include<stdio.h>

int main()
{
    int i,j,n,a=0,sum;
    scanf("%d",&n);
    int ar[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            sum+=ar[i][j];
        }
        if(sum!=0)
            a=1;
    }
    if(a==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
