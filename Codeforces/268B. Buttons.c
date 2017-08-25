#include<stdio.h>

int main()
{
    int i,j,n,ans=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        ans += ((n-i+1)+(i-1)*(n-i));
    }
    printf("%d\n",ans);
    return 0;
}
