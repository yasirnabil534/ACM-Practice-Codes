#include<bits/stdc++.h>

using namespace std;

bool cmp(int a, int b)
{
    return a>b;
}

int main()
{
    int t,T;
    cin>>T;
    cout<<"Lumberjacks:\n";
    for(t=1;t<=T;t++)
    {
        int ar[10];
        int x,m,i;
        for(i=0;i<10;i++) cin>>ar[i];
        if(is_sorted(ar,ar+10)) cout<<"Ordered\n";
        else if(is_sorted(ar,ar+10,cmp)) cout<<"Ordered\n";
        else cout<<"Unordered\n";
    }
    return 0;
}
