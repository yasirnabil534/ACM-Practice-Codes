#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        double n;
        int m;
        cin>>n;
        n*=567;
        n/=9;
        n+=7492;
        n*=235;
        n/=47;
        n-=498;
        m = n;
        m%=100;
        m/=10;
        cout<<abs(m)<<'\n';
    }
    return 0;
}
