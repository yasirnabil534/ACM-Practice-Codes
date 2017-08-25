#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000][85];
    int i=0,j,p,k,x,y=0,n=0;
    while(1)
    {
        if((scanf("%s",ch[i]))==EOF)
        {
            strcat(ch[i-1],"\n");
            break;
        }
        strcat(ch[i]," ");
        /*if(ch[i][0]=='\n')
        {
            for(p=1;p<strlen(ch[i]);p++)
            {
                if(p<strlen(ch[i])-1)
                    ch[i][p-1]=ch[i][p];
                else if(p==strlen(ch[i])-1)
                    ch[i][p]='\0';
            }
        }*/
        if((strstr(ch[i],"\n")!=NULL))
            {
                //strcat(ch[i],"\b");
            }
        if(strstr(ch[i],"<br>")!=NULL)
        {
            if((strstr(ch[i-1],"<br>")==NULL)&&(strstr(ch[i],"<br>")!=NULL)&&(strstr(ch[i-1],"  "))==NULL)
                strcpy(ch[i],"  ");
            else if((strstr(ch[i-1],"  ")!=NULL)&&(strstr(ch[i],"<br>")!=NULL))
            {
                strcpy(ch[i-1],"");
                strcpy(ch[i],"\n");
            }
            //strcat(ch[i],"\b");
                n=-1;
        }
        if(strstr(ch[i],"<hr>")!=NULL)
            {
                if(strstr(ch[i-1],"\n")!=NULL)
                    strcat(ch[i-1],"\b");
                strcpy(ch[i],"\n--------------------------------------------------------------------------------");
                n=-2;
            }
        x=strlen(ch[i]);
        n+=(x);
        n%=80;
        //printf("%d-%d\n",y,n);
        if(y>=n)
        {
            if(n>=2)
            {
                strcat(ch[i-1],"\n");
                strcat(ch[i],"\b");
            }
            else
                strcat(ch[i],"\n");
        }
        y=n;
        i++;
    }
    for(j=0;j<i;j++)
    {
        printf("%s",ch[j]);
    }
    return 0;
}

