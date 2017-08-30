#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a<=20&&b<=20&&c<=20)
            cout<<"Case "<<t<<": good\n";
        else
            cout<<"Case "<<t<<": bad\n";
    }
    return 0;
}
