#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        double x, y, z, dif, p;
        cin>>x>>y>>z;
        dif = x-y;
        p = y - dif;
        cout << z-((z/(y+x))*p)<<endl;
    }
    return 0;
}
