#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    for(int t=1;cin>>str;t++)
    {
        int N,a,b;
        cin>>N;
        cout<<"Case "<<t<<":\n";
        for(int i=1; i<=N; i++)
        {
            cin>>a>>b;
            if(b<a)
            {
                a=a+b;
                b=a-b;
                a=a-b;
            }
            int s = 0;
            for(int j=a+1;j<=b;j++)
            {
                if(str[j-1]!=str[j])
                {
                    s=1;
                    break;
                }
            }
            if(s==1)
                cout<<"No\n";
            else
                cout<<"Yes\n";
        }
    }
    return 0;
}
