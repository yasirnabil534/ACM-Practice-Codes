#include<bits/stdc++.h>

using namespace std;

struct Bind
{
    int a,b,c;
};


int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int f,i,j;
        double x,y,p,m=0;
        cin>>f;
        Bind ar[f];
        for(i=0;i<f;i++)
            cin>>ar[i].a>>ar[i].b>>ar[i].c;
        for(i=0;i<f;i++)
        {
            x = (ar[i].a*1.0)/(ar[i].b);
            y = x*ar[i].c;
            y *= ar[i].b;
            m += y;
        }
        j=m;
        cout<<j<<'\n';
    }
    return 0;
}
