#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,ans=0;
    cin>>n>>k;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        if(5-ar[i]>=k) ans++;
    }
    cout<<(ans/3)<<endl;
    return 0;
}
