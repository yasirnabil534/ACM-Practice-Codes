#include<stdio.h>

int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    int pl[n][2];
    for(i=0;i<n;i++)
        for(j=0;j<2;j++)
            scanf("%d",&pl[i][j]);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(pl[i][0]==pl[j][1])
                k++;
        }
    }
    printf("%d\n",k);
    return 0;
}
