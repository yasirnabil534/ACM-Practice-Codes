#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        string str;
        cin>>str;
        int len = str.length();
        if(str[len-1]=='5'&&str[len-2]=='3')
            cout<<"-\n";
        else if(str[0]=='9'&&str[len-1]=='4')
            cout<<"*\n";
        else if(str[0]=='1'&&str[1]=='9'&&str[2]=='0')
            cout<<"?\n";
        else
            cout<<"+\n";
    }
    return 0;
}
