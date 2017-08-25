#include<stdio.h>
#include<string.h>

int main()
{
    char in[1001];
    int lp,rp,i,j,lb,rb;
    while((scanf("%s",in))!=EOF)
    {
        rb=0;
        for(i=0;i<=strlen(in);i++)
        {
            if(in[i]=='\n')
                break;
            if(in[i]==')')
            {
                rb--;
            }
            else if(in[i]=='(')
            {
                rb++;
            }
            if(rb<0)
                break;
        }
        if(rb==0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}
