#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,y;
    for(y=0;cin>>n;y++)
    {
        string str[n],st,st2;
        map <string,int> mp;
        for(int i=0;i<n;i++)
        {
            cin>>str[i];
            mp[str[i]] = 0;
        }
        int m,p,x;
        for(int t=0;t<n;t++)
        {
            cin>>st;
            cin>>m>>p;
            if(p!=0)
                mp[st] -= m;
            for(int i=0;i<p;i++)
            {
                cin>>st2;
                if(p!=0)
                    mp[st2] += m/p;
            }
            if(p!=0)
                mp[st] += m%p;
        }
        if(y>0) cout<<endl;
        for(int i=0;i<n;i++)
        {
            cout<<str[i]<<' '<<mp[str[i]]<<endl;
        }
        mp.clear();
    }
    return 0;
}
