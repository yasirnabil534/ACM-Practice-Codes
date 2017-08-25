#include<stdio.h>
#include<string.h>

int main()
{
    int t,n;
    scanf("%d",&n);
    getchar();
    for(t=1;t<=n;t++)
    {
        char bstack[100][50],fstack[100][50],input[50],curr[100][50];
        int bstktp = 0,fstktp = -1,i = 0,j,p,q,ftop=-99,stop=-99;
        strcpy(bstack[0],"http://www.lightoj.com/");
        while(1)
        {
            gets(input);
            if(strcmp(input,"QUIT")==0)
                break;
            else if(strcmp(input,"BACK")==0)
            {
                if(bstktp>0)
                {
                    fstktp++;
                    strcpy(fstack[fstktp],bstack[bstktp]);
                }
                bstktp--;
                if(bstktp<0)
                {
                    strcpy(curr[i],"Ignored");
                    bstktp = 0;
                    strcpy(bstack[0],"http://www.lightoj.com/");
                }
                else
                {
                    strcpy(curr[i],bstack[bstktp]);
                }
                strcpy(bstack[bstktp+1],"");
            }
            else if(strcmp(input,"FORWARD")==0)
            {
                if(fstktp<0)
                {
                    strcpy(curr[i],"Ignored");
                    fstktp = -1;
                }
                else
                {
                    bstktp++;
                    strcpy(bstack[bstktp],fstack[fstktp]);
                    strcpy(curr[i],fstack[fstktp]);
                    strcpy(fstack[fstktp],"");
                    fstktp--;
                }
            }
            else
            {
                bstktp++;
                for(p=0,q=6;input[q]!='\0';p++,q++)
                    input[p]=input[q];
                input[p]='\0';
                strcpy(bstack[bstktp],input);
                strcpy(curr[i],input);
                for(p=0;p<=fstktp;p++)
                    strcpy(fstack[p],"");
                fstktp=-1;
            }
            i++;
        }
        printf("Case %d:\n",t);
        for(j=0; j<i; j++)
            printf("%s\n",curr[j]);
    }

    return 0;
}
