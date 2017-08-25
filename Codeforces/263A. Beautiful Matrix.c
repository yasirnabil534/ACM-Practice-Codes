#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i,j,p,n;
    int mat[5][5];
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1)
            {
                p=i;
                n=j;
            }
        }
    printf("%d\n",(abs(2-p)+abs(2-n)));
    return 0;
}
