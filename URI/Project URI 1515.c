#include<stdio.h>

int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int ar[n],br[n],p,k,min=100000000;
        char ms[n][51];
        for(k=0;k<n;k++)
        {
            scanf("%s %d %d",ms[k],&ar[k],&br[k]);
            ar[k]-=br[k];
            if(ar[k]<min)
            {
                min=ar[k];
                p=k;
            }
        }
        printf("%s\n",ms[p]);
    }
}
