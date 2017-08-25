#include<stdio.h>
#include<string.h>

int main()
{
    int p,t,i;
    char ch[6];
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s",ch);
        p=strlen(ch);
        if(p==5)
            printf("3\n");
        else if((ch[0]=='t'&&ch[1]=='w')||(ch[0]=='t'&&ch[2]=='o')||(ch[1]=='w'&&ch[2]=='o'))
            printf("2\n");
        else
            printf("1\n");
    }
    return 0;
}
