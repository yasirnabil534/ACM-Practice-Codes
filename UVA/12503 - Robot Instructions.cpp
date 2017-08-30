#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        string str,st;
        int n,i,j,p=0;
        cin>>n;
        int ar[n];
        memset(ar,0,sizeof(ar));
        for(i=0;i<n;i++)
        {
            cin>>str;
            if(str=="LEFT")
            {
                p--;
                ar[i]-=1;
            }
            else if(str=="RIGHT")
            {
                p++;
                ar[i]+=1;
            }
            else if(str=="SAME")
            {
                cin>>st>>j;
                ar[i]+=ar[j-1];
                p+=ar[i];
            }
        }
        cout<<p<<endl;
    }
    return 0;
}
