#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for(t=1;;t++)
    {
        int n,df,cnt=0;
        cin>>n;
        if(n==0) break;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            if(ar[i]==0) cnt++;
        }
        df = n-cnt;
        cout<<"Case "<<t<<": "<<df-cnt<<endl;
    }
    return 0;
}
