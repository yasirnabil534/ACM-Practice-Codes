#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,p;
    char ch[]="LIFE IS NOT A PROBLEM TO BE SOLVED";
    scanf("%d",&n);
    p=n-1;
    for(i=0;i<=p;i++)
    {
        if(i<=(p-1))
            printf("%c",ch[i]);
        else if(i==p)
            printf("%c\n",ch[i]);
    }
    return 0;
}
