#include <stdio.h>

int main() {

    int r,x,n,i,j,k,t;
    for(t=1;(scanf("%d",&r))!=EOF&&r%2!=0&&r>=5&&r<=101;t++)
    {
        int ara[r][r];
        n=r-1;
        x=r/3;
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if((i==j&&i<x)||(i==j&&i>(n-x)))
                    ara[i][j]=2;
                else if((i==(n-j)&&i<x)||(i==(n-j)&&i>(n-x)))
                    ara[i][j]=3;
                else if(i>=x&&i<=(n-x)&&j>=x&&j<=(n-x))
                {
                    if(i==(r/2)&&j==(r/2))
                    {
                        ara[i][j]=4;
                    }
                    else
                    ara[i][j]=1;
                }
                else
                    ara[i][j]=0;
            }
        }
        for(i=0;i<r;i++)
        {
            for(j=0;j<r;j++)
            {
                if(j!=n)
                    printf("%d",ara[i][j]);
                if(j==n&&i!=n)
                    printf("%d\n",ara[i][j]);
                if(i==n&&j==n)
                    printf("%d\n\n",ara[i][j]);
            }
        }
    }
    return 0;
}



