#include<stdio.h>
#include<string.h>

int main()
{
    char ch[10000];
    int i,n;
    while(gets(ch)!=NULL)
    {
        n=strlen(ch);
        for(i=0;i<n;i++)
        {
            ch[i]=ch[i]-7;
        }
        printf("%s\n",ch);
    }
    return 0;
}
