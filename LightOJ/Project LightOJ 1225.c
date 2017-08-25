#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        char str[20];
        int i,p=1,n;
        scanf("%s",str);
        n=strlen(str);
        for(i=0;i<=n/2;i++)
        {
            if(str[i]!=str[n-i-1])
            {
                p=0;
                break;
            }
        }
        if(p==0)
            printf("Case %d: No\n",t);
        else
            printf("Case %d: Yes\n",t);
    }
    return 0;
}
