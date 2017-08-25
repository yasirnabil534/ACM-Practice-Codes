#include<stdio.h>

int main()
{
    int a,b,c,s,m;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        m=a;
        s=b;
    }
    else
    {
        m=b;
        s=a;
    }
    c=(m-s)/2;
    printf("%d %d\n",s,c);
    return 0;
}
