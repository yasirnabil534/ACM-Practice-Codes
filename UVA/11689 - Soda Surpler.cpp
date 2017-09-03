#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int p,n,m,div,mod=0,key=1,ans=0;
        cin>>p>>n>>m;
        div = n+p;
        while(1)
        {
            mod = div%m;
            div /= m;
            ans+=div;
            div = div+mod;
            if(div==1||div<m)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
