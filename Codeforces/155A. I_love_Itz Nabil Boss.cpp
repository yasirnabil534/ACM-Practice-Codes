#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,min,max,ans=0;
    cin>>n;
    int ar[n];
    for(i=0;i<n;i++)
        cin>>ar[i];
    min = max = ar[0];
    for(i=1;i<n;i++)
    {
        if(ar[i]<min)
        {
            min = ar[i];
            ans++;
        }
        if(ar[i]>max)
        {
            max = ar[i];
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}
