#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,p=0,n,ar[52];
    for(i=0; i<52; i++)
        ar[i]=0;
    scanf("%d",&n);
    char ch[n+1],al[52];
    getchar();
    scanf("%s",ch);
    for(i=0; i<26; i++)
        al[i]=(i+'A');
    al[i]='\0';
    for(j=0; j<n; j++)
    {
        if(ch[j]>='a'&&ch[j]<='z')
            ch[j]=ch[j]-'a'+'A';
    }
    for(i=0; i<n; i++)
    {
        for(j=0; j<26; j++)
        {
            if(ch[i]==al[j])
                al[j]='0';
        }
    }
    for(i=0; i<26; i++)
    {
        if(al[i]=='0')
            p++;
    }
    if(p==26)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
