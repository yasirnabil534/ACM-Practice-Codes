#include<iostream>
#include<cstdio>
#include<cstring>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int i,j,n,m,x,y;
        char ch[5][6];
        n=-1;
        for(i=0;i<5;i++)
            scanf("%s",ch[i]);
        for(i=0;i<5;i++)
        {
            if(ch[0][i]=='|')
            {
                m=i;
                break;
            }
        }
        for(i=0;i<5;i++)
        {
            for(j=0;j<5;j++)
            {
                if(ch[i][j]=='>')
                {
                    n=1;
                    x=i;
                    y=j;
                    break;
                }
                else if(ch[i][j]=='<')
                {
                    n=0;
                    x=i;
                    y=j;
                    break;
                }
            }
            if(n!=-1)
                break;
        }
        if((m>y&&n==1)||(m<y&&n==0))
            printf("Case %d: Thik Ball\n",t);
        else
            printf("Case %d: No Ball\n",t);
        getchar();
        //getchar();
    }
    return 0;
}
