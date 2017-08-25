#include<stdio.h>
#include<string.h>

int main()
{
    int i,j=0,n,p,a=0,s=0;
    char ch[10000],ch2[10000];
    gets(ch);
    n=strlen(ch);
    if(ch[0]>='A'&&ch[0]<='Z')
        s=1;
    for(i=1;i<n;i++)
    {
        if(!(ch[i]>='A'&&ch[i]<='Z'))
            j=1;
    }
    if(j==1)
        printf("%s\n",ch);
    else if(j==0&&s!=1)
    {
        if(ch[0]>='a'&&ch[i]<='a')
            ch[0]=ch[0]-'a'+'A';
        for(i=1;i<n;i++)
            ch[i]=ch[i]-'A'+'a';
        printf("%s\n",ch);
    }
    else if(j==0&&s==1)
    {
        for(i=0;i<n;i++)
            ch[i]=ch[i]-'A'+'a';
        printf("%s\n",ch);
    }
    return 0;
}

