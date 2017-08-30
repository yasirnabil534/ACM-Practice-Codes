#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    for(;cin>>t>>T;)
    {
        if(t==0&&T==0)
            break;
        int ar[t],br[T];
        for(int i=0;i<t;i++) cin>>ar[i];
        int flag = 1,d,c,v;
        for(int i=0;i<T;i++)
        {
            cin>>d>>c>>v;
            ar[d-1]-=v;
            ar[c-1]+=v;
        }
        for(int i=0;i<t;i++) if(ar[i]<0) {flag = 0;break;}
        if(flag==1) cout<<"S\n";
        else cout<<"N\n";
    }
    return 0;
}
