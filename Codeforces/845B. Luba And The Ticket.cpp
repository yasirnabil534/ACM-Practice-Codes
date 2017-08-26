#include<bits/stdc++.h>

using namespace std;

int main()
{
    char str[8];
    scanf("%s",str);
    int i,j,k,l,m,n,ans=10000000,cnt;
    for(i=0;i<=9;i++)
        for(j=0;j<=9;j++)
            for(k=0;k<=9;k++)
                for(l=0;l<=9;l++)
                    for(m=0;m<=9;m++)
                        for(n=0;n<=9;n++)
                        {
                           cnt=0;
                           if(i+j+k==l+m+n)
                           {
                               cnt+=(i!=(str[0]-'0'));
                               cnt+=(j!=(str[1]-'0'));
                               cnt+=(k!=(str[2]-'0'));
                               cnt+=(l!=(str[3]-'0'));
                               cnt+=(m!=(str[4]-'0'));
                               cnt+=(n!=(str[5]-'0'));
                               ans = min(cnt,ans);
                           }
                        }
    printf("%d\n",ans);

    return 0;
}
