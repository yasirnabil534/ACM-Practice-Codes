#include<bits/stdc++.h>

using namespace std;

int main()
{
    int l[4],s[4],r[4],p[4];
    for(int i=0; i<4; i++)
    {
        cin>>l[i]>>s[i]>>r[i]>>p[i];
    }
    int success = 1;
    for(int i=0; i<4; i++)
    {
        if(p[i]==1)
        {
            if(s[(i+2)%4]==0&&s[i]==0&&l[i]==0&&r[i]==0&&l[(i+1)%4]==0&&r[(i+3)%4]==0)
            {
                /// Do nothing, karon accident hobe na
            }
            else
                success = 0;
        }
    }
    if(success==0) cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}

