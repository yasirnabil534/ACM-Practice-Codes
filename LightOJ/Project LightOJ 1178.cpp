#include<bits/stdc++.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double a,b,c,d,dbac,ac,tra,s,ans,h;
        scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
        if(a>=c)
            ac=a-c;
        else
            ac=c-a;
        s = (ac+b+d)/2;
        dbac = sqrt(s*(s-d)*(s-b)*(s-ac));
        h = (2*dbac)/ac;
        ans = .5*(a+c)*h;
        printf("Case %d: %.10f\n",t,ans);
    }
    return 0;
}
