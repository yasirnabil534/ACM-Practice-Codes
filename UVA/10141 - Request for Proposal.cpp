#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,p,t;
    for(t=1;cin>>n>>p;t++)
    {
        if(n==0&&p==0) break;
        string str[n],st[p],ch,nam;
        double Max=20001010.0;
        getchar();
        for(int i=0;i<n;i++) {getline(cin,str[i]);}
        double d;
        int r,x=-1;
        for(int i=0;i<p;i++)
        {
            getline(cin,st[i]);
            cin>>d>>r;
            getchar();
            for(int j=0;j<r;j++)
            {
                getline(cin,ch);
            }
            if(r>x)
            {
                x = r;
                nam = st[i];
                Max = d;
            }
            else if(r==x && d<Max)
            {
                x = r;
                nam = st[i];
                Max = d;
            }
        }
        if(t>1) cout<<'\n';
        cout<<"RFP #"<<t<<'\n'<<nam<<"\n";
    }
    return 0;
}
