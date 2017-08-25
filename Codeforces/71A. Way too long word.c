#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,t;
    char ch[10000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s",ch);
        n=strlen(ch);
        if(n<=10)
            printf("%s\n",ch);
        else if(n>10)
            printf("%c%d%c\n",ch[0],n-2,ch[n-1]);
    }
    return 0;
}
