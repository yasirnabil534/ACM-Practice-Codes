#include<stdio.h>
#include<string.h>

int main()
{
    int x=0,n,i;
    char ch[5];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",ch);
        getchar();
        if(strcmp(ch,"++X")==0)
            ++x;
        else if(strcmp(ch,"X--")==0)
            x--;
        if(strcmp(ch,"X++")==0)
            x++;
        else if(strcmp(ch,"--X")==0)
            --x;
    }
    printf("%d\n",x);
    return 0;
}
