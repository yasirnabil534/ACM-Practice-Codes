#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    int ar,k=0;
    cin>>T;
    for(t=1; t<=T; t++)
    {
        string ch;
        cin>>ch;
        if(ch=="donate")
        {
            cin>>ar;
            k+=ar;
        }
        if(ch=="report")
            cout<<k<<'\n';
    }
    return 0;
}
