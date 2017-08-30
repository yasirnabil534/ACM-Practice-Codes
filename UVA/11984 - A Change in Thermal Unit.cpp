#include<iostream>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        double d,f,n,x,ans;
        cin>>d>>f;
        n = ((9.0*d)/5)+32;
        x = n+f;
        ans = ((x-32)*5)/9;
        cout.precision(2);
        cout<<"Case "<<t<<": "<<fixed<<ans<<endl;
    }
    return 0;
}
