#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int a,b,ans;
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
            ans=0;
        else if(a>b)
            ans = (2*a-b)*4+19;
        else
            ans = b*4+19;
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}
