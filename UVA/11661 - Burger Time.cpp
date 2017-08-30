#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    for(t=1;cin>>T;t++)
    {
        if(T==0) break;
        string str;
        cin>>str;
        int i,r=-1,d=-1,min=100000000000,dif=0;
        for(i=0;i<T;i++)
        {
            if(str[i]=='R') r = i;
            if(str[i]=='D') d = i;
            if(str[i]=='Z') {min=0;break;}
            if(r>=0&&d>=0)
            {
                dif = abs(r-d);
                if(min>dif)
                    min=dif;
            }
        }
        cout<<min<<endl;
    }
    return 0;
}
