#include<stdio.h>
#include<math.h>

int check(int n)
{
    int a,x;
    double b,y;
    y=n;
    b=log2(n);
    x=b;
    if(x==b)
        return 0;
    else
        return 1;
}

int main()
{
    int u,r,i,a,b,c,j,t,a1,b1,c1;
    while(1)
    {
        scanf("%d",&t);
        if(t==0)
            break;
        u=0;
        r=0;
        i=0;
        for(j=1;j<=t;j++)
        {
            a1=0,b1=0,c1=0;
            scanf("%d %d %d",&a,&b,&c);
            if(check(a)==0)
            {
                u++;
                a1=1;
            }
            if(check(b)==0)
            {
                r++;
                b1=1;
            }
            if(check(c)==0)
            {
                i++;
                c1=1;
            }
            if(a>b&&a>c&&a1==1)
                u++;
            else if(b>a&&b>c&&b1==1)
                r++;
            else if(c>a&&c>b&&c1==1)
                i++;
        }
        if(u>r&&u>i)
            printf("Uilton\n");
        else if(r>u&&r>i)
            printf("Rita\n");
        else if(i>u&&i>r)
            printf("Ingred\n");
        else if(u==r||r==i||u==i)
            printf("URI\n");
    }
    return 0;
}
