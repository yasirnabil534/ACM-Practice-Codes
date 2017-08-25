#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,dis,ar[3];
    for(i=0;i<3;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+3);
    dis = ar[2]-ar[0];
    cout<<dis<<endl;
    return 0;
}
