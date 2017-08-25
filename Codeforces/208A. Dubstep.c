#include<stdio.h>

int main()
{
    char st[201],ch[201];
    int i,j,n,x;
    scanf("%s",ch);
    n=strlen(ch);
    for(i=0,j=0;i<n;i++)
    {
        if(ch[i]=='W')
        {
            if(ch[i+1]=='U'&&ch[i+2]=='B')
                i+=2;
            else  if(i!=0&&j!=0&&ch[i-1]=='B'&&ch[i-2]=='U'&&ch[i-3]=='W')
            {
                st[j++]=' ';
                st[j++]=ch[i];
            }
            else
                st[j++]=ch[i];
        }
        else  if(i!=0&&j!=0&&ch[i-1]=='B'&&ch[i-2]=='U'&&ch[i-3]=='W')
        {
            st[j++]=' ';
            st[j++]=ch[i];
        }
        else
            st[j++]=ch[i];
    }
    st[j]='\0';
    printf("%s\n",st);
    return 0;
}
