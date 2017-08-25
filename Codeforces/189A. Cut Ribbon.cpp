#include<bits/stdc++.h>

using namespace std;

int dp[4005];

int DP(int n,int a,int b,int c)
{
    if(n==0) return 0;
    if(n<0) return -1000000;
    if(dp[n]!=-1) return dp[n];
    int na,nb,nc;
    na = 1+DP(n-a,a,b,c);
    nb = 1+DP(n-b,a,b,c);
    nc = 1+DP(n-c,a,b,c);
    return dp[n] = max(max(na,nb),nc);
}

int main()
{
    int n,a,b,c,ans;
    cin>>n>>a>>b>>c;
    memset(dp,-1,sizeof(dp));
    ans = DP(n,a,b,c);
    cout<<ans<<endl;
    return 0;
}
