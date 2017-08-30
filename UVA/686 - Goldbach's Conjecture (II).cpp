#include<bits/stdc++.h>

using namespace std;


long long int mark[1000001];
vector <long long int> prime;

void Seieve()
{
    long long int i,j,limit = 1002;
    mark[1] = 1;
    prime.push_back(2);
    for(i=4;i<=1000000;i+=2)
    {
        mark[i] = 1;
    }
    for(i=3;i<=1000000;i+=2)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=i*i;j<=1000000;j+=(i*2))
                    mark[j] = 1;
            }
        }
    }
}

int main()
{
    Seieve();
    long long int i,j,n,x,cnt;
    while(1)
    {
        cnt = 0;
        scanf("%lld",&n);
        if(n==0)
            break;
        x = n/2;
        for(i=0;prime[i]<=x&&i<=prime.size();i++)
        {
            j = n-prime[i];
            if(mark[j]==0)
                cnt++;
        }
        printf("%lld\n",cnt);
    }
    return 0;
}
