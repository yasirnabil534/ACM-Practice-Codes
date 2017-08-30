#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int i,n,j,count=0,temp;
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
                    temp=ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                    count++;
                }
            }
        }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
