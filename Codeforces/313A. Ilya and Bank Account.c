#include<stdio.h>
#include<string.h>

int main()
{
    int i,x;
    char ch[11];
    scanf("%s",ch);
    x = strlen(ch);
    if(ch[0]=='-')
    {
        if(ch[x-1]<ch[x-2])
        {
            ch[x-2]=ch[x-1];
            ch[x-1]='\0';
        }
        else
        {
            ch[x-1]='\0';
        }
    }
    if(strcmp(ch,"-0")==0)
        strcpy(ch,"0");
    printf("%s\n",ch);
    return 0;
}
