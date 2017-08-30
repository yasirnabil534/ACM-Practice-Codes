#include<bits/stdc++.h>

using namespace std;

int cost[1005],weight[1005];
int dp[1005][50];

int DP(int pos,int wgt,int n,int cap)
{
    if(pos>n)
        return 0;
    int profit1,profit2;
    if(dp[pos][wgt]>0) return dp[pos][wgt];
    if(wgt+weight[pos]<=cap)
        profit1 = cost[pos] + DP(pos+1,wgt+weight[pos],n,cap);
    else
        profit1 = 0;
    profit2 = DP(pos+1,wgt,n,cap);
    dp[pos][wgt] = max(profit1,profit2);
    //cout<<"Go = "<<pos<<' '<<dp[pos][wgt]<<endl;
    return dp[pos][wgt];
}

int main()
{
    int T;
    scanf("%d",&T);
    for(int t=1;t<=T;t++)
    {
        int n;
        scanf("%d",&n);
        memset(cost,0,sizeof(cost));
        memset(weight,0,sizeof(weight));
        memset(dp,-1,sizeof(dp));
        for(int i=1;i<=n;i++)
        {
            scanf("%d %d",&cost[i],&weight[i]);
        }
        int peopleNo,peopleCap,ans=0;
        scanf("%d",&peopleNo);
        for(int i=0;i<peopleNo;i++)
        {
            scanf("%d",&peopleCap);
            int tmp = DP(1,0,n,peopleCap);
            //cout<<"People "<<i<<"- "<<tmp<<endl;
            memset(dp,-1,sizeof(dp));
            ans+=tmp;
        }
        printf("%d\n",ans);
    }
    return 0;
}

/**
2
3
72 17
44 23
31 24
1
26
6
64 26
85 22
52 4
99 18
39 13
54 9
4
23
20
20
26
*/
