#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        long long int ar[3];
        for(int i=0;i<3;i++) cin>>ar[i];
        if(ar[0]+ar[1]+ar[2]==0) break;
        sort(ar,ar+3);
        if(ar[0]*ar[0]+ar[1]*ar[1]==ar[2]*ar[2])
            cout<<"right\n";
        else cout<<"wrong\n";
    }
    return 0;
}
