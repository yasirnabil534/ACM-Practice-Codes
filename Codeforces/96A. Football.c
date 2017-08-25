#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k=0,m,p,n;
    char ch[100000];
    scanf("%s",ch);
    n=strlen(ch);
    for(i=1;i<n;i++)
    {
        if(ch[i-1]==ch[i])
            k++;
        if(k==6)
            break;
        else if(ch[i-1]!=ch[i])
            k=0;
    }
    if(k==6)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
