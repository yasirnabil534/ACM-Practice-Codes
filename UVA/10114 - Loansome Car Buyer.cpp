#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    for(t=1;;t++)
    {
        double dnpay, amntln;
        int numrec, lnmnth;
        cin>>lnmnth>>dnpay>>amntln>>numrec;
        if(lnmnth<0) break;

        int ar[numrec];
        double dep[numrec],mnth[101];
        for(int i=0;i<101;i++) mnth[i]=0;
        for(int i=0;i<numrec;i++)
        {
            cin>>ar[i]>>dep[i];
            for(int j=ar[i];j<=100;j++)
                mnth[j] = dep[i];
        }
        double paymnth = amntln/lnmnth;
        double owe = amntln;
        double carval = (owe+dnpay)*(1-mnth[0]);
        int i=1,cnt=0;
        while (carval<owe)
        {
            carval *= (1-mnth[i++]);
            owe -= paymnth;
            cnt++;
        }
        cout<<cnt<<" month";
        if(cnt!=1) cout<<'s';
        cout<<'\n';

    }
    return 0;
}
