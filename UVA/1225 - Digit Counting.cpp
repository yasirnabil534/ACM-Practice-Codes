#include<bits/stdc++.h>

using namespace std;



int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,i;
        cin>>N;
        vector <int> ar[N+1];
        vector <int> br(10,0);
        ar[0] = br;
        for(i=1; i<=N; i++)
        {
            int m = i;
            while(m>0)
            {
                int x = m%10;
                br[x]++;
                m/=10;
            }
            ar[i] = br;
        }
        for(i=0; i<10; i++)
        {
            if(i>0) cout<<' ';
            cout<<ar[N][i];
        }
        cout<<'\n';
    }
    return 0;
}
