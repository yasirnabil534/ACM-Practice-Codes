#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j=0,p,x,m;
    cin>>n;
    p=n;
    while(n)
    {
        j++;
        n/=10;
    }
    n=p;
    p = pow(10.0,j-1);
    //cout<<p<<endl;
    m = n/p;
    m+=1;
    x = m*pow(10.0,j-1);
    cout<<x-n<<endl;
    return 0;
}
