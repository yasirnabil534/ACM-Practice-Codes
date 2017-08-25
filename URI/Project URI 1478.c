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
        t=i;
        for(j=1;j<x;j++)
        {
            {
            if(j<i)
            {
                m[i-1][j-1]=t;
                t--;
            }
            if(j>=i)
            {
                m[i-1][j-1]=t;
                t++;
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


