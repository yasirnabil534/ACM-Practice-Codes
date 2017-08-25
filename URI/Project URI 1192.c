#include<stdio.h>

int main()
{
    int t,i,j,a,b;
    char ch;
    scanf("%d",&t);
    for(j=1;j<=t;j++)
    {
        scanf("%d %c %d",&a,&ch,&b);
        if(a!=b&&ch>='A'&&ch<='Z')
            i=b-a;
        else if(a==b)
            i=a*b;
        else if(ch>='a'&&ch<='z')
            i=a+b;
        printf("%d\n",i);
    }
    return 0;
}
