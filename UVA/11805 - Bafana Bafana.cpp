#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int n,m,k,p;
        cin>>n>>k>>p;
        int mod = p%n;
        int ans = (k+mod)%n;
        if(ans==0) ans=n;
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}
