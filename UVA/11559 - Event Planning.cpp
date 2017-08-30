#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n,b,h,w,sum,Min;
    while(cin>>n>>b>>h>>w)
    {
        long long int p,a;
        Min = 100000000;
        for(int i=1;i<=h;i++)
        {
            sum=0;
            cin>>p;
            for(int j=1;j<=w;j++)
            {
                cin>>a;
                if(a>=n)
                {
                    sum+=(n*p);
                    if(sum<Min)
                        Min=sum;
                }
            }
        }
        if(Min<=b)
            cout<<Min<<endl;
        else
            cout<<"stay home\n";
    }
    return 0;
}
