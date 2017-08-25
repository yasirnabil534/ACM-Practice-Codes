#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t, T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,q,i,j,k,m,up,dn,md,lq,hq,s1,s2;
        scanf("%d %d",&n,&q);
        long long int ar[n],br[q];
        for(i=0;i<n;i++)
        {
            scanf("%lld",&ar[i]);
        }
        for(j=0;j<q;j++)
        {
            scanf("%d %d",&lq,&hq);
            s1 = s2 = -1;
            up = n-1;
            dn = 0;
            if(lq<ar[0])
                s1 = 0;
            else
            while(dn<=up)
            {
                md = ((up-dn)/2);
                if(lq==ar[md])
                {
                    s1 = md - 1;
                    up = md-1;
                }
                if(lq<ar[md])
                {
                    up=md-1;
                    s1 = md;
                }
                if(lq>ar[md])
                    dn=md+1;
            }
            up = n-1;
            dn = 0;
            if(hq<ar[0])
                s2 = 0;
            else if(hq>ar[n-1])
                s2 = n-1;
            else
            while(dn<=up)
            {
                md = ((up+dn)/2);
                if(hq==ar[md])
                {
                    s2 = md + 1;
                    dn = md+1;
                }
                if(hq<ar[md])
                    up=md-1;
                if(hq>ar[md])
                {
                    s2 = md;
                    dn=md+1;
                }
            }
            br[j] = s2 - s1 + 1;
        }
        printf("Case %d:\n",t);
        for(j=0;j<q;j++)
            printf("%d\n",br[j]);
    }
    return 0;
}
