#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str[] = {"Happy", "birthday", "to", "you","Happy" ,"birthday" ,"to" ,"you","Happy" ,"birthday" ,"to" ,"Rujia","Happy" ,"birthday" ,"to" ,"you"};
    int n, x=0, i,  p=0,k1=0,k2=0;
    cin>>n;
    string ch[n];
    for(i=0;i<n;i++) cin>>ch[i];
    for (i=0; ;i++)
    {
        p = i%16;
        x = i%n;
        k1 = (i+1)/16.0;
        k2 = (i+1)/n;
        cout<<ch[x]<<": "<<str[p]<<'\n';//<<k1<<' '<<k2<<' '<<p<<'\n';
        if(k1>0&&k2>0&&p==15)
            break;
    }
    return 0;
}
