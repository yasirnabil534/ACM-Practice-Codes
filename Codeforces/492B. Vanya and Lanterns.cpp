#include<iostream>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;

int main()
{
    int n,l,i;
    double zo=0,mx=0,ans,now=-1;
    cin>>n>>l;
    double ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    sort(ar,ar+n);
    if(ar[0]!=0)
        zo = ar[0];
    if(ar[n-1]!=l)
        mx = l-ar[n-1];
    ans = (zo>=mx)?zo:mx;
    for(i=1;i<n;i++)
    {
        if(ar[i]-ar[i-1]>now)
            now = ar[i]-ar[i-1];
    }
    if((now/2.0)>ans)
        ans = (now/2.0);
    printf("%.10f\n",ans);
    return 0;
}

