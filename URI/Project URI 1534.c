#include <stdio.h>

int main() {

    int r,x,n,i,j,k,t;
    for(t=1;(scanf("%d",&r))!=EOF;t++)
    {
    x=r+1;
    int m[r][r];
    for(i=1;i<x;i++)
    {
        t=i;
        for(j=1;j<x;j++)
        {
            {
                if(i+j-1==r)
                {
                    m[i-1][j-1]=2;
                }
                else if(i==j&&i+j-1!=r)
                {
                    m[i-1][j-1]=1;
                }
                else
                {
                    m[i-1][j-1]=3;
                }
            }
            {
                if(j!=r)
                {
                    printf("%d",m[i-1][j-1]);
                }
                else if(j==r)
                {
                    printf("%d\n",m[i-1][j-1]);
                }
            }
        }

    }
    }
    return 0;
}


