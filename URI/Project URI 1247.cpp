#include<bits/stdc++.h>

using namespace std;

int main()
{
    double D,VF,VG,x,y,p;
    while(cin>>D>>VF>>VG)
    {
        p = sqrt(144.0+(D*D));
        x = p/VG;
        y = 12.0/VF;
        if(p<D)
            cout<<"S\n";
        else
            cout<<"N\n";
    }
    return 0;
}
