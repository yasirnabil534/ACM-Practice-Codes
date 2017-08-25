#include<bits/stdc++.h>

using namespace std;

long long int dp[100005],sr[100005];

long long int fun(long long int n,long long int m)
{
    if(n==0) return 0;
    if(n==1) return dp[1];
    if(n<m) return 0;
    if(sr[n]!=0) return sr[n];
    sr[n] = max((dp[n]*n + fun(n-2,m)),fun(n-1,m));
    return sr[n];
}

int main()
{
    long long int n,i,j,mx=-1,mn = 1000009;
    cin>>n;
    long long int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        dp[ar[i]]++;
        if(ar[i]>mx) mx = ar[i];
        if(ar[i]<mn) mn = ar[i];
    }
    cout<<fun(mx,mn)<<endl;
    return 0;
}
