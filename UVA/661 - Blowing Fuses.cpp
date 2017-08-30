#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    int t;
    for(t=1;;t++)
    {
        int n,m,c,x;
        cin>>n>>m>>c;
        if(n==m&&m==c&&c==0) break;
        int ar[n],br[n],Max = -1,p=0,flag = 1;
        for(int i=0; i<n; i++) {cin>>ar[i];br[i]=0;}
        for(int i=0; i<m; i++)
        {
            cin>>x;
            if(br[x-1]==0)
            {
                br[x-1] = 1;
                p+=ar[x-1];
            }
            else if(br[x-1]==1)
            {
                br[x-1] = 0;
                p-=ar[x-1];
            }
            if(p>c) flag = 0;
            if(p>Max) Max = p;
        }
        if(flag==0)
            cout<<"Sequence "<<t<<"\nFuse was blown.\n\n";
        else if(flag == 1){
            cout<<"Sequence "<<t<<"\nFuse was not blown.\nMaximal power consumption was "<<Max<<" amperes.\n\n";
        }
    }
    return 0;
}
