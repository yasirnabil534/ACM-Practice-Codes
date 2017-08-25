#include<stdio.h>

int main()
{
    int i,j,m,n;
    scanf("%d",&n);
    int ar[n][n];
    for(i=0;i<n;i++)
    {
        ar[i][0]=1;
        ar[0][i]=1;
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
            ar[i][j]=ar[i-1][j]+ar[i][j-1];
    }
    printf("%d\n",ar[n-1][n-1]);
    return 0;
}
