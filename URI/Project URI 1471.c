#include<stdio.h>

int main()
{
    int n,r,i,j,c,temp;
    while((scanf("%d %d",&n,&r))!=EOF)
    {
        c=0;
        int ar[n],br[r],cr[n-r];
        for(i=1; i<=n; i++)
            ar[i-1]=i;
        for(i=0; i<r; i++)
            scanf("%d",&br[i]);
        for(i=0; i<r; i++)
        {
            for(j=i; j<r; j++)
            {
                if(br[i]>br[j])
                {
                    temp=br[j];
                    br[j]=br[i];
                    br[i]=temp;
                }
            }
        }
        for(i=0; i<n; i++)
        {
            for(j=0; j<r; j++)
            {
                if(ar[i]==br[j])
                {
                    ar[i]=0;
                    break;
                }
            }
            if(ar[i]!=0)
            {
                cr[c]=ar[i];
                c++;
            }
        }
        if((n-r)==0)
            printf("*\n");
        else
            for(i=0; i<c; i++)
            {
                if(i<c-1)
                    printf("%d ",cr[i]);
                else if(i<c)
                    printf("%d \n",cr[i]);
            }
    }
    return 0;
}
