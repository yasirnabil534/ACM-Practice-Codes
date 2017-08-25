#include<stdio.h>

int main()
{
    int i,j,k,n,max=0,min=999999,x;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<n;i++)
    {
        if(ar[i]>max)
        {
            max=ar[i];
            j=i;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(ar[i]<min)
        {
            min=ar[i];
            k=i;
        }
    }
    if(j<k)
        x=(n-k-1)+(j);
    else
        x=(n-k-1)+(j)-1;
    printf("%d\n",x);
    return 0;
}
