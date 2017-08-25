#include<stdio.h>
#include<string.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++)
    {
        char in[101],out[101];
        int i,j,m,n,inp[26],oup[26],p=1;
        for(i=0;i<26;i++)
        {
            inp[i]=0;
            oup[i]=0;
        }
        gets(in);
        gets(out);
        m=strlen(in);
        n=strlen(out);
        for(i=0;i<m;i++)
        {
            if(in[i]>='A'&&in[i]<='Z')
                in[i]=in[i]-'A'+'a';
        }
        for(i=0;i<n;i++)
        {
            if(out[i]>='A'&&out[i]<='Z')
                out[i]=out[i]-'A'+'a';
        }
        for(i=0;i<m;i++)
        {
            if(in[i]>='a'&&in[i]<='z')
                inp[in[i]-'a']++;
        }
        for(i=0;i<n;i++)
        {
            if(out[i]>='a'&&out[i]<='z')
                oup[out[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
            if(inp[i]!=oup[i])
            {
                p=0;
                break;
            }
        }
        if(p==1)
            printf("Case %d: Yes\n",t);
        else
            printf("Case %d: No\n",t);
    }
    return 0;
}
