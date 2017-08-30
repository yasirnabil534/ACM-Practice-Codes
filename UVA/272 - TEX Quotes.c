#include<stdio.h>

int main()
{
    char ch;
    int i,j,p=0;
    while(scanf("%c",&ch)!=EOF)
    {
        if(ch=='"')
        {
            p++;
            if(p%2==0)
                printf("''");
            else if(p%2!=0)
                printf("``");
        }
        else
            printf("%c",ch);
    }
    return 0;
}
