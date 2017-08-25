#include<bits/stdc++.h>
#define MOD 1000003

long long int fact[1000001];

void FACT()
{
    fact[0] = fact[1] = 1;
    long long int i;
    for(i=2;i<=1000000;i++)
    {
        fact[i] = ((i%MOD)*(fact[i-1]%MOD))%MOD;
    }
}

long long int EGCD(long long int a, long long int b, long long int *X, long long int *Y)
{
    if(b==0)
    {
        *Y = 0;
        *X = 1;
        return a;
    }
    long long int ans, x, y;
    ans = EGCD(b,a%b,&x,&y);
    *Y = x-(a/b)*y;
    *X = y;
    return ans;
}

int main()
{
    int t,T;
    FACT();
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int n,r,ans,x,y,p,pa,gcd;
        scanf("%lld %lld",&n,&r);
        p = n-r;
        pa = ((fact[r]%MOD)*fact[p]%MOD)%MOD;
        gcd = EGCD(pa,MOD,&x,&y);
        x = ((x%MOD)+MOD)%MOD;
        ans = ((fact[n]%MOD)*(x%MOD))%MOD;
        printf("Case %d: %lld\n",t,ans);
    }
    return 0;
}
