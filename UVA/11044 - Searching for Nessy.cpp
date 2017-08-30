#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        long long int x,y;
        cin>>x>>y;
        x/=3;
        y/=3;
        cout<<x*y<<endl;
    }
    return 0;
}
