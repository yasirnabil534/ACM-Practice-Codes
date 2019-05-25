/// LIS DP template

bool cmp(int a,int b)
{
    return a>b;
}

ll dp[105];

int main()
{
    int n;
    scin(n);
    ll ar[n];
    for(int i = 0; i < n; i++)
        scln(ar[i]);
    for(ll i = 0; i < n; i++) dp[i] = 0; /// LIS starts here
    for(ll i = n - 1; i >= 0; i--)
    {
        ll tmp = 0;
        for(ll j = i+1; j < n; j++)
        {
            if(ar[i]<ar[j])
            {
                tmp = max(tmp,dp[j]);
            }
        }
        dp[i] = 1 + tmp;
    }
    ll xam = 0;
    for(ll i = 0; i < n; i++)
        xam = max(xam,dp[i]);    /// LIS ends here
    pf("%lld\n",xam);
    return 0;
}
