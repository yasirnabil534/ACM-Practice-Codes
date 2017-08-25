#include<stdio.h>

int main()
{
    int n,m,i,j,k,x,sum=999999,min=999999,max=-5;
    scanf("%d %d",&n,&m);
    int ar[m];
    for(i=0;i<m;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<m;i++)
    {
        for(j=i;j<m;j++)
        {
            if(ar[j]<ar[i])
            {
                x=ar[i];
                ar[i]=ar[j];
                ar[j]=x;
            }
        }
    }
    for(i=0;i<=m-n;i++)
    {
        x=ar[i+n-1]-ar[i];
        if(x<sum)
            sum=x;
    }
    if(sum==999999)
        sum=0;
    printf("%d\n",sum);
    return 0;
}
