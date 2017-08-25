#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,p=0,k=0;
    char s[101],ch[]="hello";
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==ch[p])
        {
            p++;
        }
        if(p==5)
            break;
    }
    if(p==5)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
