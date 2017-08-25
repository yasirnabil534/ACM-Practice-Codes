#include<bits/stdc++.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,ans;
        scanf("%d",&n);
        ans = n-2015;
        if(ans>=0)
        {
            ans++;
            printf("%d A.C.\n",ans);
        }
        else
        {
            ans*=(-1);
            printf("%d D.C.\n",ans);
        }
    }
    return 0;
}
