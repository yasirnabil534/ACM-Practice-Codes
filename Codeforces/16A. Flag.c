#include<stdio.h>

int main()
{
    int a=0,b=0,i,j,n,m;
    scanf("%d %d",&n,&m);
    getchar();
    char ar[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            ar[i][j]=getchar();
        }
        getchar();
    }
    for(i=0;i<n;i++)
    {
        for(j=1;j<m;j++)
        {
            if(i>0)
            {
                if(ar[i][j]==ar[i-1][j])
                    b++;
            }
            if(ar[i][j]!=ar[i][j-1])
                a++;
        }
    }
    if(a==0&&b==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
