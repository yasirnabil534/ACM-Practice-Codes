#include<stdio.h>

int main()
{
    long long int i,j,n,m,t1=0,t2=0,temp;
    scanf("%I64d %I64d",&n,&m);
    long long int ar[n],cr[n],br[m];
    for(i=0;i<n;i++)
    {
        scanf("%I64d",&cr[i]);
        ar[i]=cr[i];
    }
    for(i=0;i<m;i++)
        scanf("%I64d",&br[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(ar[i]>ar[j])
            {
                temp=ar[i];
                ar[i]=ar[j];
                ar[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(br[i]>br[j])
            {
                temp=br[i];
                br[i]=br[j];
                br[j]=temp;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(ar[i]==ar[i+1])
            t1++;
    }
    for(i=0;i<m-1;i++)
    {
        if(br[i]==br[i+1])
            t2++;
    }
    if(t2>0&&t2!=t1)
        printf("Impossible\n");
    else if(t1>0&&t2==t1)
        printf("Ambiguity\n");
    else
    {
        printf("Possible\n");
        for(i=0;i<n;i++)
        {
            if(i<n-1)
                printf("%I64d ",cr[i]);
            else
                printf("%I64d\n",cr[i]);
        }
    }
    return 0;
}
