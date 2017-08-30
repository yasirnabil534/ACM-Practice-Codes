#include<bits/stdc++.h>

using namespace std;

string numDigit(string st)
{
    int n = st.length();
    stringstream ss;
    ss<<n;
    return ss.str();
}

int main()
{
    string str;
    while(1)
    {
        cin>>str;
        if(str=="END") break;
        if(str=="1")
            cout<<1<<endl;
        else
        {
            int i;
            string st = str;
            for(i=1;;i++)
            {
                st = numDigit(st);
                if(st=="1") break;
            }
            cout<<i+1<<endl;
        }
    }
    return 0;
}
