#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
         int n;
         cin>>n;
         int ar[n],hi=0,lo=0;
         for(int i=0;i<n;i++)
         {
             cin>>ar[i];
             if(i>0)
             {
                 if(ar[i]>ar[i-1]) hi++;
                 else if(ar[i]<ar[i-1]) lo++;
             }
         }
         cout<<"Case "<<t<<": "<<hi<<' '<<lo<<endl;
    }
    return 0;
}
