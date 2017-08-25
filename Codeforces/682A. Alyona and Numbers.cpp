#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,n,i,j,a,b,sum=0,k;
    cin>>m>>n;
    if(m>=n)
    {
        a=n;
        b=m;
    }
    else
    {
        a=m;
        b=n;
    }
    for(i=1;i<=a;i++)
    {
        k=5-(i%5);
        if(k!=0&&k<=b)
        {
            sum++;
            sum+=(b-k)/5;
        }
    }
    cout<<sum<<endl;
    return 0;
}
