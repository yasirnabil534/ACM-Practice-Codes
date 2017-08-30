#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    long long int a,b,ans;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
        if(a>b)
        {
            ans=a;
            a=b;
            b=ans;
        }
        ans = b-a;
        cout<<ans<<endl;
    }
    return 0;
}

