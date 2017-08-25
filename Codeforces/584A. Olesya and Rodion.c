#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,t;
    scanf("%d %d",&n,&t);
    char ch[n+1];
    if(t==10)
    {
        if(n<2)
            printf("-1\n");
        else
        {
            ch[0]='1';
            for(i=1;i<n;i++)
                ch[i]='0';
            ch[i]='\0';

        printf("%s\n",ch);
        }
    }
    else
    {
        ch[0]=(t+'0');
        for(i=1;i<n;i++)
            ch[i]='0';
        ch[i]='\0';

        printf("%s\n",ch);
    }
    return 0;
}
