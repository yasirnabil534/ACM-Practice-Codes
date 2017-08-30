#include<bits/stdc++.h>

using namespace std;

int mod;

long long int BigMod(long long int a, long long int b)
{
    if(b==0) return 1%mod;
    if(b==1) return a%mod;
    if(b%2==0)
    {
        long long int temp = BigMod(a,(b/2));
        temp = ((temp%mod)*(temp%mod))%mod;
        return temp;
    }
    else if(b%2!=0)
    {
        long long int temp = BigMod(a,(b/2));
        temp = ((temp%mod)*(temp%mod))%mod;
        return ((temp%mod)*(a%mod))%mod;
    }

}

int main()
{
    long long int a,b,c;
    while(cin>>a>>b>>mod)
    {
        cout<< BigMod(a,b)<<endl;
    }
    return 0;
}


