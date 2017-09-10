#include<bits/stdc++.h>

using namespace std;

long long int func(int a,int b,int c, int x)
{
    long long int res = a*x*x+b*x+c;
    return res;
}

int main()
{
    int a,b,c,d,l;
    while(1)
    {
        cin>>a>>b>>c>>d>>l;
        int ans=0;
        if(!(a||b||c||d||l))
            break;
        for(int i=0;i<=l;i++)
        {
            long long int temp = func(a,b,c,i);
            if(temp%d==0)
                ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
