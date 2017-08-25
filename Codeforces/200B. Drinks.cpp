#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,n;
    cin>>n;
    double ar[n],sum=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
        sum+=ar[i];
    }
    sum /= (n*1.0);
    printf("%.12f\n",sum);
    return 0;
}
