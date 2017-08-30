#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while (cin>>n)
    {
        int ar,cnt=0;
        for(int i=0;i<5;i++)
        {
            cin>>ar;
            if(ar==n)
                cnt++;
        }
        cout<<cnt<<'\n';
    }
    return 0;
}
