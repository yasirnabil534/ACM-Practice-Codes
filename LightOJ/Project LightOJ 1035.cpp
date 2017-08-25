#include<bits/stdc++.h>

int main()
{
    int prime[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
    int T,t;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        int i,j,k,n;
        scanf("%d",&n);
        int arr[25];
        memset(arr,0,sizeof(arr));
        for(k=n; k>=2; k--)
        {
            j=k;
            for(i=0; i<25&&prime[i]<=n; i++)
            {
                while(j%prime[i]==0)
                {
                    arr[i]++;
                    j/=prime[i];
                    if(j<prime[i])
                        break;
                }
            }
        }
        printf("Case %d: %d = ",t,n);
        k=0;
        for(i=0;i<25;i++)
        {
            if(k>0&&arr[i]!=0)
                printf(" * ");
            if(arr[i]!=0)
            {
                k=1;
                printf("%d (%d)",prime[i],arr[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
