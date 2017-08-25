#include<stdio.h>
#include<string.h>

int main()
{
    char ch[101];
    int i,j,n,p=1,k;
    scanf("%s",ch);
    n=strlen(ch);
    for(i=1;i<n;i++)
    {
        k=0;
        for(j=0;j<i;j++)
        {
            if(ch[i]==ch[j])
                k=1;
        }
        if(k==1)
            continue;
        p++;
    }
    if(p%2==0)
        printf("CHAT WITH HER!\n");
    else
        printf("IGNORE HIM!\n");
    return 0;
}
