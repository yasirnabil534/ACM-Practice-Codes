#include<bits/stdc++.h>

using namespace std;

vector <long long int> prime, n = 2000000000;
bool mark[2000000005];

void Seieve()
{
    int i, j, limit = sqrt(2000000000)+4;
    mark[1] = 1;
    prime.push_back(2);
    for(i=4; i<=n; i++) mark[i] = 1;
    for(i=3; i<=n; i++)
    {
        if(!mark[i])
        {
            prime.push_back(i);
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=(i*2))
                {
                    mark[j] = 1;
                }
            }
        }
    }
}

int main()
{

    return 0;
}
