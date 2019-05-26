/// 0-1 knapsack template (Iterative)

bool cmp(int a,int b)
{
    return a>b;
}

ll dp[2004][2004];
ll n,cap;
ll wght[2004], cost[2004];

void knapsack()
{
    ms(dp,0);
    for(ll i = 1; i <= n; i++)
    {
        for(ll w = 1; w <= cap; w++)
        {
            dp[i][w] = dp[i-1][w];
            if(w>=wght[i])
                dp[i][w] = max(dp[i][w],cost[i] + dp[i-1][w - wght[i]]);
        }
    }
}

int main()
{
    ll m;
    scln(m);
    scln(n);
    cap = m;
    for(ll i = 1; i <= n; i++)
    {
        scln(wght[i]);
        scln(cost[i]);
    }
    knapsack();
    pf("%lld\n",dp[n][m]);
    return 0;
}
