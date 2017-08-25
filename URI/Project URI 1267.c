#include<stdio.h>

int main()
{
    int n,d,i,j,r,a,sum;
    while(1)
    {
        scanf("%d %d",&n,&d);
        if(n==0&&d==0)
            break;
        int ar[d][n];
        for(i=0;i<d;i++)
        {
            for(j=0;j<n;j++)
            {
                ar[i][j]=0;
            }
        }

        for(i=0;i<d;i++)
        {
            for(j=0;j<n;j++)
            {
                scanf("%d",&ar[i][j]);
            }
        }

        a=0;

        for(i=0;i<n;i++)
        {
            sum=0;
            for(j=0;j<d;j++)
            {
                sum+=ar[j][i];
            }
            if(sum==d)
                a=1;
        }
        if(a==1)
            printf("yes\n");
        else if(a==0)
            printf("no\n");
    }
    return 0;
}
