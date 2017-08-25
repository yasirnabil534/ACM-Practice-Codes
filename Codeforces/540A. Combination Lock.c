#include<stdio.h>

int main()
{
    int i,j,p=0,n,a,b,c,d;
    scanf("%d",&n);
    char ch[n+1],al[n+1];
    scanf("%s %s",ch,al);
    for(i=0;i<n;i++)
    {
        if(ch[i]>=al[i])
        {
            a=ch[i]-'0';
            b=al[i]-'0';
        }
        else
        {
            b=ch[i]-'0';
            a=al[i]-'0';
        }
        c=a-b;
        d=10-(a-b);
        if(c<=d)
            p+=c;
        else
            p+=d;
    }
    printf("%d\n",p);
    return 0;
}
