#include<bits/stdc++.h>

using namespace std;

vector <long long int> prime;
bool mark[1000010];

void SeievePrime()
{
    long long int i,j,k,limit=sqrt(1000010)+2;
    prime.push_back(2);
    for(i=4; i<1000010; i+=2)
        mark[i]=1;
    for(i=3; i<1000010; i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
                for(j=i*i; j<1000010; j+=i*2)
                    mark[j]=1;
        }
    }
}


int main()
{
    SeievePrime();
    int t,T;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        long long int p,l,i,j,n,cnt=0,ans=1;
        scanf("%lld",&n);
        l=n;
        for(i=0; prime[i]*prime[i]<=l; i++)
        {
            p=prime[i];
            cnt=0;
            while(l%p==0)
            {
                cnt++;
                l/=p;
                if(l<p)
                {
                    break;
                }
            }
            if(cnt>0)
                ans*=(cnt+1);
        }
        if(l>1)
            ans*=2;
        printf("Case %d: %lld\n",t,ans-1);
    }
    return 0;
}

///300=2.3.4.5.6.10.12.15.20.25.30.50.60.75.100.150.300
