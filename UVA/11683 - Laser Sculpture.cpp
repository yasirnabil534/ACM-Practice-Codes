#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T,n;
    for(t=1;cin>>T;t++)
    {
        if(T==0) break;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
            cin>>ar[i];
        int cnt=T-ar[0];
        for(int i=1;i<n;i++)
        {
            int temp = ar[i-1]-ar[i];
            if(temp>0)
                cnt+=temp;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
