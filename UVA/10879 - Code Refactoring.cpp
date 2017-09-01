#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        long long int N;
        cin>>N;
        long long int ar[2] = {0,0};
        long long int x = 0,cnt = 2,i,p = sqrt(N);
        for(i=2;i<=p&&cnt;i++)
        {
            if(N%i==0)
            {
                ar[x++] = i;
                cnt--;
            }
        }
        if(ar[0]>0&&ar[1]>0)
            printf("Case #%d: %lld = %lld * %lld = %lld * %lld\n",t,N,ar[0],(N/ar[0]),ar[1],(N/ar[1]));
    }
    return 0;
}
