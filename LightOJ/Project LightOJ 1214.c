#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        char a[222];
        long long int b,r,i,n;
        scanf("%s %lld",a,&b);
        n=strlen(a);
        r=0;
        if(b<0)
            b*=(-1);
        for(i=0;i<n;i++)
        {
            if(!(a[i]>='0'&&a[i]<='9'))
                continue;
            r=r*10;
            r+=(a[i]-'0');
            if(r>=b)
                r=r%b;
        }
        if(r==0)
            printf("Case %d: divisible\n",t);
        else
            printf("Case %d: not divisible\n",t);
    }
    return 0;
}
