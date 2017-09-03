#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,div,mod=0,key=1,ans=0;
        cin>>n>>m;
        div = n;
        while(1)
        {
            mod = div%m;
            div /= m;
            ans+=div;
            div = div+mod;
            if(div==1||div<m)
            {
                if(div!=1)
                    key = 0;
                break;
            }
        }
        if(key) cout<<ans<<endl;
        else cout<<"cannot do this\n";
    }
    return 0;
}
