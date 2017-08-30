#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for(t=1;;t++)
    {
        string str;
        cin>>str;
        if(str=="*") break;
        if(str=="Hajj")
            cout<<"Case "<<t<<": Hajj-e-Akbar\n";
        else if(str=="Umrah")
            cout<<"Case "<<t<<": Hajj-e-Asghar\n";
    }
    return 0;
}
