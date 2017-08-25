#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,w,i,k,j,x,m,sum=0,sum2=0;
    cin>>n>>w;
    int ar[n];
    double cp[n],p;
    for(i=0;i<n;i++)
    {
        cin >> ar[i];
        sum+= ceil(ar[i]/2.0);
        sum2+=ar[i];
    }
    if(sum>w)
        cout<<"-1\n";
    else
    {
        for(i=0;i<n;i++){
            cp[i] = (ar[i]*w*1.0)/sum2;
            x = cp[i];
            p = cp[i] - x;
            p*=10;
            x = p;
            if(x>=p)
                cp[i] = ceil(cp[i]);
            else
                cp[i] = floor(cp[i]);
            if(i>0) cout<<' ';
            cout<<cp[i];
        }
        cout<<'\n';
    }

    return 0;
}
