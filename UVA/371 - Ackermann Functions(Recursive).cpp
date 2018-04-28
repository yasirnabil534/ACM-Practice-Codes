#include<bits/stdc++.h>

using namespace std;

int recurr(long long int n)
{
    if(n<=1)
        return 1;
    if(n%2==0)
        return 1 + recurr(n/2);
    else
        return 1 + recurr(3*n+1);
}

int solve(long long int n)
{
    if(n%2==0)
        return recurr(n/2);
    else return recurr(3*n+1);
}

int main()
{
    long long int a,b,p,ans,i;
    while(true)
    {
        scanf("%lld %lld",&a,&b);
        if(a==0&&b==0)
            break;
        long long int mx = -1;
        if(a>b)
            swap(a,b);
        for(i = a; i <= b; i++)
        {
            p = solve(i);
            if(mx<p)
            {
                mx = p;
                ans = i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,ans,mx);
    }
    return 0;
}

/**
A - 371
B - 11875
C - 443
D - 10931
*/
