#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,j,k,p;
    char ch[10000];
    scanf("%s",ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]>='A'&&ch[i]<='Z')
            ch[i]=ch[i]-'A'+'a';
        if(ch[i]!='a'&&ch[i]!='e'&&ch[i]!='i'&&ch[i]!='o'&&ch[i]!='u'&&ch[i]!='y')
            printf(".%c",ch[i]);
    }
    return 0;
}
