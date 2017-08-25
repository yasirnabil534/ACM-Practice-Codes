#include<stdio.h>

int main()
{
    int n[15],a[5],b[5],i,j=0,k=0,p;
    for(i=0;i<=14;i++)
        scanf("%d",&n[i]);
    for(p=0;p<15;p++)
    {
        if(n[p]%2==0)
        {
            a[j]=n[p];
            j++;
        }
        else if(n[p]%2!=0)
        {
            b[k]=n[p];
            k++;
        }
        if(k==5||p==14)
        {
            for(i=0;i<k;i++)
            {
                printf("impar[%d] = %d\n",i,b[i]);
            }
            k=0;
        }
        if(j==5||p==14)
        {
            for(i=0;i<j;i++)
            {
                printf("par[%d] = %d\n",i,a[i]);
            }
            j=0;
        }
    }
    return 0;
}
