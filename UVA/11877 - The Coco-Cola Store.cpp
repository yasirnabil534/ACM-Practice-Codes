#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    while(1)
    {
        long long int div,mod=0,key=1,ans=0,lend=0;
        cin>>n;
        if(n==0) break;
        div = n;
        while(1)
        {
            ans+=(div/3);
            mod = div%3;
            div /= 3;
            div = div+mod;
            if(div==2){
                div+=1;
            }
            if(div==1)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

