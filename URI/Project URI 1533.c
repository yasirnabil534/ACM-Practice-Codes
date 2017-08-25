#include<stdio.h>

int main()
{
    int n;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        int ar[n],br[n],i,j,k,tm;
        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            br[i]=ar[i];
        }
        for(j=0;j<n;j++)
            for(k=j;k<n;k++)
            {
                if(br[k]>br[j])
                {
                    tm=br[k];
                    br[k]=br[j];
                    br[j]=tm;
                }
            }
        for(i=0;i<n;i++)
        {
            if(ar[i]==br[1])
                j=i+1;
        }
        printf("%d\n",j);
    }
    return 0;
}
