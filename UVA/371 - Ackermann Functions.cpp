#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int l,r,x,y;
    while(1)
    {
        cin>>l>>r;
        x=l;y=r;
        if(l==0&&r==0) break;
        if(l>r) swap(l,r);
        long long int i,j,Max=0,p,cnt;
        for(long long int i=l;i<=r;i++)
        {
            //Max = 0;
            j=i;
            cnt = 0;
            while(1)
            {
                if(j%2==0)
                    j/=2;
                else
                    j = (3*j+1);
                cnt++;
                if(cnt>Max) {p=i;Max = cnt;}
                if(j==1) break;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",l,r,p,Max);
    }
    return 0;
}
