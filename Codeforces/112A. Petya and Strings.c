#include<stdio.h>
#include<string.h>

int main()
{
    char ch[102],ch2[102];
    int i,j=0,k,m,n,p;
    scanf("%s",ch);
    getchar();
    scanf("%s",ch2);
    m=strlen(ch);
    n=strlen(ch2);
    for(i=0;i<n;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
            ch[i]=ch[i]-'a'+'A';
    }
    for(i=0;i<n;i++)
    {
        if(ch2[i]>='a'&&ch2[i]<='z')
            ch2[i]=ch2[i]-'a'+'A';
    }
    if(m>n)
        printf("1\n");
    else if(m<n)
        printf("-1\n");
    else if(m==n)
        {
            for(i=0;i<n;i++)
            {
                if(ch[i]>ch2[i])
                {
                    j++;
                    break;
                }
                else if(ch[i]<ch2[i])
                {
                    j--;
                    break;
                }
            }
            if(j>0)
               printf("1\n");
            else if(j<0)
                printf("-1\n");
            else if(j==0)
                printf("0\n");
        }
    return 0;
}
