#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,i,j=240,ans=0;
    scanf("%d %d",&n,&k);
    j-=k;
    for(i=1;i<=n;i++)
    {
        j-=(i*5);
        if(j<0)
            break;
        ans++;
    }
    printf("%d\n",ans);
    return 0;
}
