#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i>1)
            cout<<"that ";
        if(i%2!=0)
            cout<<"I hate ";
        if(i%2==0)
            cout<<"I love ";
    }
    cout<<"it\n";
    return 0;
}
