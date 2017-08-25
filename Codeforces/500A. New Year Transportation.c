#include<stdio.h>

int main()
{
    int i,n,t,ans=0;
    scanf("%d %d",&n,&t);
    int ar[n+1];
    ar[0]=0;
    ar[n]=9999;
    for(i=1;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<=n;)
    {
        if(i==t)
        {
            ans=1;
            break;
        }
        i=i+ar[i];
    }
    if(ans==1)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
