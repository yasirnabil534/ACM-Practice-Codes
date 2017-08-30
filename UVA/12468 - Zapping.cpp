#include<iostream>
#include<cstdio>

int main()
{
    int a,b,c,d;
    while(1)
    {
        scanf("%d %d",&a,&b);
        if(a==-1&&b==-1)
            break;
        c=a-b;
        if(c<0)
            c+=100;
        d=b-a;
        if(d<0)
            d+=100;
        if(c<=d)
            printf("%d\n",c);
        else
            printf("%d\n",d);
    }
    return 0;
}
