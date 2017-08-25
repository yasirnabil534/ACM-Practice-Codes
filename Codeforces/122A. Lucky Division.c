#include<stdio.h>

int main()
{
    int i,n,m,a,p=1,j,x;
    scanf("%d",&n);
    a=n;
    for(m=1;; m++)
    {
        if(a%10!=4&&a%10!=7)
            p=0;
        a/=10;
        if(a==0)
            break;
    }
    if(p!=1)
    {
        for(j=4;j<=n; j++)
        {
            a=j;
            x=1;
            for(m=1;; m++)
            {
                if(a%10!=4&&a%10!=7)
                    x=0;
                a/=10;
                if(a==0)
                    break;
            }
            if(x==1)
            {
                if(n%j==0)
                {
                    p=1;
                    break;
                }
            }
        }
    }
    if(p==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
