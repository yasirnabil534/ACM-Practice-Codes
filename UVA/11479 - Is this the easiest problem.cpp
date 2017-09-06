#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,t;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        long long int ar[3];
        for(int i=0;i<3;i++) cin>>ar[i];
        sort(ar,ar+3);
        cout<<"Case "<<t<<": ";
        if(ar[0]+ar[1]<=ar[2])
            cout<<"Invalid\n";
        else if(ar[0]==ar[1]&&ar[1]==ar[2])
            cout<<"Equilateral\n";
        else if(ar[0]==ar[1]||ar[1]==ar[2]||ar[0]==ar[2])
            cout<<"Isosceles\n";
        else
            cout<<"Scalene\n";
    }
    return 0;
}
