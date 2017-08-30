#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++) cin>>ar[i];
        sort(ar,ar+n);
        int x = n/2;
        printf("Case %d: %d\n",t,ar[x]);
    }
    return 0;
}
