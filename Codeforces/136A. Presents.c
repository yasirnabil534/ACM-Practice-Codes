#include<stdio.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    int ar[n],br[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        j=ar[i];
        br[j-1]=i+1;
    }
    for(i=0;i<n;i++)
        printf("%d ",br[i]);
    printf("\n");
    return 0;
}
