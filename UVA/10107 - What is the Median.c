#include<stdio.h>

int main()
{
    long long int m,t,ar[10001],i,j,n,p=0;
    while(scanf("%d",&ar[p])!=EOF)
    {
        for(i=1;i<=p;i++)
        {
            j=i;
            while(ar[j]<ar[j-1]&&j!=0)
            {
                t=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=t;
                j--;
            }
        }
        if(p%2==0)
        {
            printf("%d\n",ar[p/2]);
        }
        else
        {
            n = (ar[p/2] + ar[(p/2)+1])/2.0;
            printf("%d\n",n);
        }
        p++;
    }
    return 0;
}
