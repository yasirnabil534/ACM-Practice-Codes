#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k;
    while(cin>>k)
    {
        if(k==0) break;
        int m;
        cin>>m;
        set <string> vc;
        set <string> :: iterator it;
        string p;
        for(int i=0;i<k;i++)
        {
            cin>>p;
            vc.insert(p);
        }
        int suc = 1;
        for(int i=0;i<m;i++)
        {
            int r, c, cnt=0;
            cin>>c>>r;
            for(int j=0;j<c;j++)
            {
                cin>>p;
                it=vc.find(p);
                if(it!=vc.end())
                    cnt++;
            }
            if(cnt<r) suc = 0;
        }
        if(suc == 1) cout<<"yes\n";
        else cout<<"no\n";
    }
    return 0;
}
