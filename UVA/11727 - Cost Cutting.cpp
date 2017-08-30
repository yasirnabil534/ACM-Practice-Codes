#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int ar[3];
        for(int i=0;i<3;i++) cin>>ar[i];
        sort(ar,ar+3);
        cout<<"Case "<<t<<": "<<ar[1]<<'\n';
    }
    return 0;
}
