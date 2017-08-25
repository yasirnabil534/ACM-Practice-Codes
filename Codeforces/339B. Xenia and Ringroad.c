#include<stdio.h>

int main()
{
    long long int n,m,i,ans=0,temp;
    scanf("%I64d %I64d",&n,&m);
    long long int ar[m+1];
    ar[0]=1;
    for(i=1;i<=m;i++)
    {
        scanf("%I64d",&ar[i]);
    }
    for(i=1;i<=m;i++)
    {
        temp=(ar[i]-ar[i-1]);
        if(temp<0)
            temp=temp+n;
        ans+=temp;
    }
    printf("%I64d\n",ans);
    return 0;
}
