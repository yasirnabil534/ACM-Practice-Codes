#include<bits/stdc++.h>

using namespace std;

#define pb push_back

int in()
{
    int x;
    scanf("%d",&x);
    return x;
}

vector <int> prime;
vector <bool> mark(10001,0);
int ar[10001];

void Sieve()
{
    int i,j, limit = 100;
    prime.pb(1);
    prime.pb(2);
    mark[0] = 1;
    for(i=4;i<=10000;i+=2) mark[i] = 1;
    for(i=3;i<=10000;i+=2)
    {
        if(!mark[i])
        {
            prime.pb(i);
            if(i<=limit)
            {
                for(j=i*i;j<=10000;j+=(i*2))
                {
                    mark[j]=1;
                }
            }
        }
    }
}

int main()
{
    Sieve();
    int ans=0;
    for(int i=0;i<=10000;i++){
        if(!mark[i])
        {
            ans++;
        }
        ar[i] = ans;
    }
    int n,x;
    while(cin>>n>>x)
    {
        int fp,mp,sp,x2,tmp;
        if(ar[n]%2==0)
        {
            mp = (ar[n]/2)-1;
            x2 = x*2;
            sp = mp + x;
            fp = mp - (x-1);
        }
        else
        {
            mp = (ar[n]/2);
            x2 = x*2 - 1;
            sp = mp + (x-1);
            fp = mp - (x-1);
        }
        if(fp<0) fp = 0;
        printf("%d %d:",n,x);
        for(int i=fp;i<=sp;i++)
        {
            if(prime[i]>n) break;
            printf(" %d",prime[i]);
        }
        printf("\n\n");
    }
    return 0;
}
