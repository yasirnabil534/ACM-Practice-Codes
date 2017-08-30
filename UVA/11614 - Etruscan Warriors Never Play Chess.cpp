#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        long long int n,a,x=0;
        cin>>n;
        x = (-1+sqrt(1+4*2*n))/2;
        cout<<x<<endl;
    }
    return 0;
}
