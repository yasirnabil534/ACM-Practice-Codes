#include<stdio.h>

int main()
{
    int n,i,j,k,a=0,p,max,q;
    scanf("%d",&n);
    int ar[n+1],br[n+1],cr[n],sr[n+1];
    for(i=0; i<=n; i++)
        br[i]=0;
    ar[0]=sr[0]=-1;
    for(i=1; i<=n; i++)
    {
        scanf("%d",&sr[i]);
    }
    for(j=n;j>=1; j--)
    {
        max=0;
        for(i=n; i>=1; i--)
        {
            if(sr[i]>=max)
            {
                max=sr[i];
                ar[j]=sr[i];
                q=i;
            }
        }
        sr[q]=-1;
    }
    for(j=1; j<=n; j++)
    {
        if(ar[j]==-1)
            continue;
        cr[a]=p=ar[j];
        for(k=0; k<=n; k++)
        {
            if(ar[k]==-1)
                continue;
            if(p==ar[k])
            {
                br[a]++;
                ar[k]=-1;
            }
        }
        a++;
    }
    for(i=0; i<a; i++)
        printf("%d aparece %d vez(es)\n",cr[i],br[i]);
    return 0;
}


