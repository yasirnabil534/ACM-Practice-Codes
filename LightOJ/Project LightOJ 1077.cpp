#include<bits/stdc++.h>
#include<cstdlib>

long long int GCD(long long int a,long long int b)
{
    if(b==0)
        return a;
    return GCD(b,a%b);
}

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int x1,y1,x2,y2,x,y,gcd,a,b;
        scanf("%lld %lld %lld %lld",&x1,&y1,&x2,&y2);
        x = x2-x1;
        if(x<0) x*=(-1);
        y = y2-y1;
        if(y<0) y*=(-1);
        if(x>=y) {a=x;b=y;}
        else {b=x;a=y;}
        gcd = GCD(a,b);
        gcd++;
        printf("Case %d: %lld\n",t,gcd);
    }
    return 0;
}
