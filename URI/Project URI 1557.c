#include <stdio.h>
int power_of_2(int x)
{
    int i,n=1;
    for(i=1;i<=x;i++)
    {
        n*=2;
    }
    return n;
}

int digit(int x)
{
    int y;
    for(y=1;;y++)
    {
        x/=10;
        if(x==0)
        {
            break;
        }
    }
    return y;
}

int main() {

    int r,x,n,i,j,k,t,m2,m3;
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
        n=power_of_2(i-1);
        for(j=1;j<x;j++)
        {
            {
                m[i-1][j-1]=n;
                n*=2;
                if(i==r&&j==r)
                {
                    m3=m[i-1][j-1];
                    m2=digit(m3);
                }
            }
        }
    }


    for(i=1;i<x;i++)
    {
        for(j=1;j<x;j++)
        {
                if(j<r)
                {
                    printf("%*d ",m2,m[i-1][j-1]);
                }
                else if(j==r&&i!=r)
                {
                    printf("%*d\n",m2,m[i-1][j-1]);
                }
                else if(j==r&&i==r)
                {
                    printf("%*d\n\n",m2,m[i-1][j-1]);
                }
            }
    }
    }
    }
    return 0;
}

