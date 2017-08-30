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
        if(str.length()==5) cout<<'3'<<endl;
        else
        {
            int on=0,to=0;
            if(str[0]=='o') on++;
            else if(str[0]=='t') to++;
            if(str[1]=='n') on++;
            else if(str[1]=='w') to++;
            if(str[2]=='e') on++;
            else if(str[0]=='o') to++;
            if(on>to) cout<<'1'<<'\n';
            else cout<<'2'<<'\n';
        }
    }
    return 0;
}
