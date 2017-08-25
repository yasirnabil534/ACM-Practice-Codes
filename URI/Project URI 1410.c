#include<stdio.h>

int main()
{
    int a,d,i,j,k,p,temp;
    while(1)
    {
        scanf("%d %d",&a,&d);
        if(a==0&&d==0)
            break;

        int ar[a],br[d];

        for(i=0;i<a;i++)
            scanf("%d",&ar[i]);

        for(j=0;j<d;j++)
            scanf("%d",&br[j]);

        for(k=0;k<a;k++)
        {
            for(p=k;p<a;p++)
            {
                if(ar[p]<=ar[k])
                {
                    temp=ar[p];
                    ar[p]=ar[k];
                    ar[k]=temp;
                }
            }
        }

        for(k=0;k<d;k++)
        {
            for(p=k;p<d;p++)
            {
                if(br[p]<=br[k])
                {
                    temp=br[p];
                    br[p]=br[k];
                    br[k]=temp;
                }
            }
        }

        if(ar[0]>=br[1])
            printf("N\n");

        else if(ar[0]<br[1])
            printf("Y\n");
    }
    return 0;
}
