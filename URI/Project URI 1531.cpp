#include<bits/stdc++.h>

using namespace std;

long long int ar[100000001];

long long int fib(long long int n)
{
    if(n==1||n==2)
        return 1;
    else if(ar[n]<=0)
    {
        ar[n] = fib(n-1)+fib(n-2);
    }
    return ar[n];
}

int main()
{
    long long int n,m,fb,answer;
    while(cin>>n)
    {
        ///memset(ans,-1,sizeof(ans));
        fb = fib(n);
        cout<<fb<<endl;
    }
    return 0;
}
