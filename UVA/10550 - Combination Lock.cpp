#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int a,b,c,d,fs,sn,td,total;
        cin>>a>>b>>c>>d;
        if(a==0&&b==0&&c==0&&d==0) break;
        fs = a - b;
        if(fs<0) fs+=40;
        sn = b - c;
        if(sn>0) sn=40-sn;
        else sn*= (-1);
        td = c - d;
        if(td<0) td+=40;
        total = fs+sn+td;
        total *= 9;
        total += 1080;
        cout<<total<<endl;
    }
    return 0;
}
