#include<stdio.h>

int main()
{
    int n,k,i,j,p,temp;
    scanf("%d %d",&n,&k);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(p=0;p<n;p++)
        for(i=p;i<n;i++)
        {
            if(ar[i]>ar[p])
            {
                temp=ar[i];
                ar[i]=ar[p];
                ar[p]=temp;
            }
        }
    j=0;
    for(i=0;i<n;i++)
    {
        if((ar[i]>=ar[k-1])&&(ar[i]>0))
            j++;
    }
    printf("%d\n",j);
        return 0;
}
