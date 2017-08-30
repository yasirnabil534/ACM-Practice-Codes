#include<stdio.h>
#include<math.h>

int bigmdpow(int b,int p,int m)
{
    int i,x=1,y;
    y=b%m;
    for(i=1;i<=p;i++)
    {
        p=(p*y);
        if(p>=m)
            p=p%m;
    }
    return p;
}

int main()
{
    int b,p,m,ans;
    while(scanf("%d",&b)!=EOF)
    {
        scanf("%d %d",&p,&m);
        ans = bigmdpow(b,p,m);
        printf("%d\n",ans);
    }
    return 0;
}
