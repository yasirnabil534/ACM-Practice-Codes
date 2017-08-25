#include<stdio.h>

int main()
{
    int n,i,j,x,y,p,q,t,r,f;
    while(1)
    {
        stop:
        scanf("%d",&n);
        if(n==0)
            break;
        char ch[n][n],temp;
        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                if((n-i-1)==i&&(n-j-1)==j)
                    ch[i][j]='X';
                else
                    ch[i][j]='O';
            }
        }
        for(r=1;r<=(2*n-1); r++)
        {
            f=(r/2.0+.5);
            for(t=1; t<=f; t++)
            {
                p=0,q=0,y=0;
                if(r%4==1)
                    q=1;
                else if(r%4==2)
                    p=(-1);
                else if(r%4==3)
                    q=(-1);
                else if(r%4==0)
                    p=1;
                x=0;
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(j<n-1)
                            printf("%c",ch[i][j]);
                        else if(j==n-1&&i<n-1)
                            printf("%c\n",ch[i][j]);
                        else if(j==n-1&&i==n-1&&ch[n-1][n-1]!='X')
                        {
                            printf("%c\n@\n",ch[i][j]);
                        }
                        else if(j==n-1&&i==n-1&&ch[n-1][n-1]=='X')
                        {
                            printf("%c\n@\n",ch[i][j]);
                            goto stop;
                        }
                    }
                }
                for(i=0; i<n; i++)
                {
                    for(j=0; j<n; j++)
                    {
                        if(ch[i][j]=='X'&&x==0)
                        {
                            temp=ch[p+i][q+j];
                            ch[p+i][q+j]=ch[i][j];
                            ch[i][j]=temp;
                            x=1;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
