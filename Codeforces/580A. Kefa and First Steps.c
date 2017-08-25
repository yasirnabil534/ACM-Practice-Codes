#include<stdio.h>

int main()
{
    int i,j=0,n,bol=0,k=0;
    scanf("%d",&n);
    int ar[n+1];
    ar[0]=0;
    for(i=1;i<=n;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i-1]<=ar[i])
        {
            j++;
            if(j>k)
                k=j;
        }
        else
        {
            bol=1;
            j=1;
        }
    }
    printf("%d\n",k);
    return 0;
}
