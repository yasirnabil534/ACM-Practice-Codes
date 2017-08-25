#include<stdio.h>

long long int dp[10001],a,b,c,d,e,f;


int rec(int n)
{
    if(n==0)
    {
        return dp[0]%10000007;
    }
    else if(n==1)
    {
        return dp[1]%10000007;
    }
    else if(n==2)
    {
        return dp[2]%10000007;
    }
    else if(n==3)
    {
        return dp[3]%10000007;
    }
    else if(n==4)
    {
        return dp[4]%10000007;
    }
    else if(n==5)
    {
        return dp[5]%10000007;
    }
    else if(dp[n]!=-1)
        return dp[n]%10000007;
    else
    {
        dp[n] = rec(n-1)+rec(n-2)+rec(n-3)+rec(n-4)+rec(n-5)+rec(n-6);
        return dp[n]%10000007;
    }
}

int main()
{
    long long int n, cases,i,ii,ans;
    scanf("%lld",&cases);
    for(i=1;i<=cases;i++)
    {
        scanf("%lld %lld %lld %lld %lld %lld %lld",&a,&b,&c,&d,&e,&f,&n);
        for(ii=6;ii<=10000;ii++)
            dp[ii]=-1;
        dp[0] = a;
        dp[1] = b;
        dp[2] = c;
        dp[3] = d;
        dp[4] = e;
        dp[5] = f;
        ans = rec(n);
        printf("Case %lld: %lld\n",i,ans%10000007);
    }
    return 0;
}
