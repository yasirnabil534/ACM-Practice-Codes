#include<stdio.h>

int main()
{
    int i,j,n,m,st=0,qu=0,up,down,left,right,brk=0,f=0;
    scanf("%d %d",&m,&n);
    getchar();
    char ch[n][m];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
            scanf("%c",&ch[i][j]);
        getchar();
    }
    while(1)
    {

        if(ch[st][qu]=='>')
        {
            up=0;
            down=0;
            left=0;
            right=1;
        }
        else if(ch[st][qu]=='<')
        {
            up=0;
            down=0;
            left=1;
            right=0;
        }
        else if(ch[st][qu]=='v')
        {
            up=0;
            down=1;
            left=0;
            right=0;
        }
        else if(ch[st][qu]=='^')
        {
            up=1;
            down=0;
            left=0;
            right=0;
        }
        if(ch[st][qu]=='.'||ch[st][qu]=='>'||ch[st][qu]=='<'||ch[st][qu]=='^'||ch[st][qu]=='v')
        {
            ch[st][qu]='0';
        }
        if(up==1)
        {
            st--;
        }
        else if(down==1)
        {
            st++;
        }
        else if(left==1)
        {
            qu--;
        }
        else if(right==1)
        {
            qu++;
        }
        if(ch[st][qu]=='*')
        {
            f=1;
            break;
        }
        else if(ch[st][qu]=='0'||st<0||st>=n||qu<0||qu>=m)
        {
            break;
        }
    }
    if(f==0)
        printf("!\n");
    else
        printf("*\n");
    return 0;
}
