#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        getchar();
        int n;
        cin>>n;
        int ar[n],br[n],p,suc=0;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i]>>br[i];
            if(i>0)
            {
                if((ar[i]-br[i]) != p)
                    suc = 1;
            }
            else if(i==0)
                p=(ar[i]-br[i]);
        }
        if(t>1) cout<<'\n';
        if(suc==0) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
