#include <stdio.h>

int main() {

    int r,x,n,i,j,k,t;
    for(t=1;;t++)
    {

    scanf("%d",&r);
    if(r==0)
    {
        break;
    }
    else
    {
    x=r+1;
    int m[r][r];
    for(i=1;i<x;i++)
    {
        for(j=1;j<x;j++)
        {
            {
            if(i<=j&&i<=x-i&&i<=x-j)
            {
                m[i-1][j-1]=i;
            }
            else if(j<i&&j<=x-i&&j<=x-j)
            {
                m[i-1][j-1]=j;
            }
            else if(x-i<i&&x-i<=j&&x-i<=x-j)
            {
                m[i-1][j-1]=x-i;
            }
            else if(x-j<i&&x-j<j&&x-j<x-i)
            {
                m[i-1][j-1]=x-j;
            }
            }
            {
                if(j<r)
                {
                    printf("%3d ",m[i-1][j-1]);
                }
                else if(j==r&&i!=r)
                {
                    printf("%3d\n",m[i-1][j-1]);
                }
                else if(j==r&&i==r)
                {
                    printf("%3d\n\n",m[i-1][j-1]);
                }
            }
        }

    }
    }
    }
    return 0;
}

