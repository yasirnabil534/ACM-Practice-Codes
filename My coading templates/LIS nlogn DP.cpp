/// LIS nlogn DP template

bool cmp(int a,int b)
{
    return a>b;
}

ll ar[1000006];
ll dp[1000006];
ll I[1000006];
ll n;
stack<ll> vc;

void LCS()
{
    for(int i = 0; i < n; i++) I[i] = 10000000000000;
    I[0] = -100000000000000;
    for(int i = 0; i < n; i++)
    {
        ll x = ar[i];
        ll pos = lower_bound(I, I + n, x) - I;
        I[pos] = x;
        dp[i] = pos;
    }
}

void doPrint(ll x)
{
    vc.push(ar[x]);
    ll y = dp[x] - 1;
    for(ll i = x - 1; i >= 0; i--)
    {
        if(dp[i]==y)
        {
            vc.push(ar[i]);
            y--;
        }
        //cout<<"pos = "<<dp[i]<<endl;
    }
    while(!vc.empty())
    {
        y = vc.top();
        vc.pop();
        pf("%lld\n",y);
    }
}

int main()
{
    ll x;
    while(scln(x)!=EOF)
        ar[n++] = x;
    LCS();
    ll xam = 0, pos = 0;
    for(ll i = n; i >= 0; i--)
    {
        if(xam<dp[i])
        {
            xam = dp[i];
            pos = i;
        }
    }
    pf("%lld\n-\n",xam);
    doPrint(pos);
    return 0;
}
