#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int n,i,x=0,mil=0,jus=0;
        cin>>n;
        int ar[n];
        for(i=0;i<n;i++)
        {
             cin>>ar[i];
             mil += ((ar[i]/30)+1)*10;
             jus += ((ar[i]/60)+1)*15;
        }
        cout<<"Case "<<t<<": ";
        (mil==jus)?cout<<"Mile Juice "<<mil:(mil<jus)?cout<<"Mile "<<mil:cout<<"Juice "<<jus;
        cout<<endl;
    }
    return 0;
}
