#include<bits/stdc++.h>

using namespace std;

vector <long long int> Prime;
bool mark[1000006];

void Sieve()
{
    long long int i,j,n = sqrt(1000000)+2;
    Prime.push_back(2);
    mark[0]=mark[1]=1;
    for(i=4;i<=1000000;i+=2) mark[i]=1;
    for(i=3;i<=1000000;i+=2)
    {
        if(!mark[i])
        {
            Prime.push_back(i);
            if(i<=n)
            {
                for(j = i*i;j<=1000000;j+=(i*2))
                    mark[j]=1;
            }
        }
    }
}

int main()
{
    Sieve();
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int n,m,x=0,y=1,p=1;
        scanf("%lld",&n);
        m = n;
        for(int i=0;Prime[i]*Prime[i]<=m&&i<Prime.size();i++)
        {
            p = Prime[i];
            x=0;
            if(m%p==0)
            {
                while(m%p==0)
                {
                    x++;
                    m/=p;
                }
                y*=(x+1);
            }
        }
        if(m>1)
            y*=2;
        printf("Case %d: %lld\n",t,y-1);
    }
    return 0;
}
