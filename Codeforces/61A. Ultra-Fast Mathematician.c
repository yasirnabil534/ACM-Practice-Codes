#include<stdio.h>
#include<string.h>

int main()
{
    char a[101],b[101],res[101];
    int i,n;
    scanf("%s %s",a,b);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
            res[i]='0';
        else
            res[i]='1';
    }
    res[i]='\0';
    printf("%s\n",res);
    return 0;
}
