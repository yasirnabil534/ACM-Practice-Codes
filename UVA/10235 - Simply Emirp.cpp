#include<bits/stdc++.h>

using namespace std;

vector<int>Prime;
bool mark[10000006];
int n = 10000000;

void Sieve()
{
    int i,j,k,limit = sqrt(n*1.0) + 2;
    Prime.push_back(2);
    mark[0] = mark[1] = 1;
    for(i = 4; i <= n; i+=2) mark[i] = 1;
    for(i = 3; i <= n; i+=2)
    {
        if(!mark[i])
        {
            Prime.push_back(i);
            if(i <= limit)
            {
                for(j = i*i; j <= n; j+=(i*2))
                    mark[j] = 1;
            }
        }
    }
}

int mrev(int n)
{
    int m = 0;
    while(n>0)
    {
        m*=10;
        m += (n%10);
        n/=10;
    }
    return m;
}

int main()
{
    Sieve();
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(!mark[n])
        {
            if(!mark[mrev(n)]&&n!=mrev(n))
                printf("%d is emirp.\n",n);
            else
                printf("%d is prime.\n",n);
        }
        else
        {
            printf("%d is not prime.\n",n);
        }
    }
    return 0;
}
