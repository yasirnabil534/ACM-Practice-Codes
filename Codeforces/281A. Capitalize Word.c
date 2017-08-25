#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1001];
    int i,j,n,p;
    scanf("%s",ch);
    if(ch[0]>='a'&&ch[0]<='z')
        ch[0]=ch[0]-'a'+'A';
    printf("%s\n",ch);
    return 0;
}
