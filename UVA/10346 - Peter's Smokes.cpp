#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,k;
    while(scanf("%lld %lld",&n,&k)==2)
    {
        long long int mod=0,ans=n,div,tmp=n;
        while(tmp>=k)
        {
            div = tmp/k;
            mod = tmp%k;
            ans+=div;
            tmp = (div+mod);
        }
        printf("%lld\n",ans);
    }
    return 0;
}

///Critical case
/// 100 3 ..... ANS: 149
/// 621 3 ..... ANS: 931
