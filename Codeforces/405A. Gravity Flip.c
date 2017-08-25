#include<stdio.h>

int main()
{
    int i,j,n,temp;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[j];
                ar[j]=ar[i];
                ar[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(i<(n-1))
            printf("%d ",ar[i]);
        else
            printf("%d\n",ar[i]);
    }
    return 0;
}
