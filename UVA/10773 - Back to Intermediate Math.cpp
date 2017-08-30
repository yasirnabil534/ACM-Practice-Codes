#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        double d,v,u,a,b,ang,ans,tm;
        cin>>d>>v>>u;
        a = d/u;
        ang = (-1)*(v/u);
        tm = sqrt(v*v+u*u+2*v*u*ang);
        b = d/tm;
        ans = abs(a-b);
        if(ans!=0&&tm!=0&&u!=0&&v!=0&&a!=0&&b!=0&&ang>-1)
            printf("Case %d: %.3lf\n",t,ans);
        else
            printf("Case %d: can't determine\n",t);
    }
    return 0;
}
