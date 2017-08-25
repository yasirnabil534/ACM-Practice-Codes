#include<stdio.h>
#include<string.h>
int main()
{
    int i,m=0,n;
    double x,j=0.0;
    char s[10000];
    for(i=1;(scanf("%[^\n]",&s))!=EOF;i++)
    {

        scanf("%d",&n);
        m+=n;
        j+=1.0;
    }
    x=m/j;
    printf("%0.1lf\n",x);
    return 0;
}
