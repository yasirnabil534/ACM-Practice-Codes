#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int m,n,s,f;
        cin>>m>>n;
        s = (n/2);
        if(n%2) s++;
        f = m/2;
        cout<<"Case "<<t<<": "<<(s*s-f*f)<<endl;
    }
    return 0;
}
