#include<stdio.h>
#include<string.h>

int main()
{
    int T,p,i,j,max,n,ar[26],t;
    char ch[210];
    char al[]="abcdefghijklmnopqrstuvwxyz";
    scanf("%d",&T);
    char ans[T][201];
    for(t=1;t<=T;t++)
    {
        gets(ch);
        if(ch[0]=='\0')
            gets(ch);
        for(i=0;i<26;i++)
        {
            ar[i]=0;
        }
        al[26]='\0';
        n=strlen(ch);
        for(i=0;i<n;i++)
        {
            if(ch[i]>='A'&&ch[i]<='Z')
                ch[i]=ch[i]-'A'+'a';
            p=ch[i]-'a';
            ar[p]++;
        }
        max=-1;
        for(i=0;i<26;i++)
        {
            if(ar[i]>max)
                max=ar[i];
        }
        for(i=0,j=0;i<26;i++)
            if(ar[i]==max)
                ans[t-1][j++]=al[i];
        ans[t-1][j]='\0';
    }
    for(t=0;t<T;t++)
        printf("%s\n",ans[t]);
    return 0;
}

