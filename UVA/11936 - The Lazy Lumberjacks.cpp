#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        long long int ar[3];
        for(int i=0;i<3;i++) cin>>ar[i];
        sort(ar,ar+3);
        if(ar[0]+ar[1]>ar[2])
            cout<<"OK\n";
        else cout<<"Wrong!!\n";
    }
    return 0;
}
