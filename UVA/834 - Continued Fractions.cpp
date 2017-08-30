#include<bits/stdc++.h>

using namespace std;

vector <int> vc;

int main()
{
    int x,y;
    while(cin>>x>>y)
    {
        vc.clear();
        int div,mod,i=0;
        while(1)
        {
            div = x/y;
            mod = x%y;
            vc.push_back(div);
            if(mod==0) break;
            x = y;
            y = mod;
            ++i;
        }
        cout<<'[';
        for(int pos=0;pos<=i;pos++)
        {
            if(pos==1) cout<<';';
            else if(pos>1) cout<<',';
            cout<<vc[pos];
        }
        cout<<"]\n";
    }
    return 0;
}
