#include<stdio.h>

long long int lucky(long long int x)
{
    long long int i,j=1;
    for(i=1;;i++)
    {
        if(x%10!=4&&x%10!=7)
            j=0;
        x/=10;
        if(x==0)
            break;
    }
    return j;
}

int main()
{
    long long int i,j,m,n,a,p,x=0;
    scanf("%I64d",&n);
    j=lucky(n);
    p=n;
    for(m=1;;m++)
    {
        if(p%10==4||p%10==7)
        {
            x++;
        }
        p/=10;
        if(p==0)
            break;
    }
    i=lucky(x);
    if(i==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
