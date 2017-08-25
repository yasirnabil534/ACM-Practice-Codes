#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,p,n;
    while(1)
    {
        char ch[10000];
        if((gets(ch))==NULL)
        {
            break;
        }
        n=strlen(ch);
        p=0;
        for(i=0;i<n;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z'&&p%2!=0)
            {
                ch[i]=ch[i]-'A'+'a';
                p++;
            }
            else if(ch[i]>='a'&&ch[i]<='z'&&p%2==0)
            {
                ch[i]=ch[i]-'a'+'A';
                p++;
            }
            else if((ch[i]>='A'&&ch[i]<='Z'&&p%2==0)||(ch[i]>='a'&&ch[i]<='z'&&p%2!=0))
                p++;
        }
        for(i=0;ch[i]!='\0';i++)
            printf("%c",ch[i]);
            printf("\n");
    }
    return 0;
}

