#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,h,s=0;
    cin>>n>>h;
    int ar[n];
    for(int i=0;i<n;i++)
        cin>>ar[i];
    for(int i=0;i<n;i++)
    {
        s += ceil((ar[i]*1.0)/h);
    }
    cout<<s<<endl;
    return 0;
}

