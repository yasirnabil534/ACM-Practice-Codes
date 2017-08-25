#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,div,mod,_min,_max;
    cin>>n;
    div = n/7;
    mod = n%7;
    _min = div*2;
    if(mod>2)
    {
        _max = _min + 2;
        if(mod==6) _min+=1;
    }
    else
        _max = _min + mod;
    cout<<_min <<" "<<_max<<endl;
    return 0;
}
