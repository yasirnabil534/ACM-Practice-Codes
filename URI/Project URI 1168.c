#include<stdio.h>
#include<string.h>

int main()
{
    char ch[1000000];
    long long int test,i,j,p,n,k;
    scanf("%lld",&test);
    for(k=1;k<=test;k++)
    {
        n=0;
        scanf("%s",ch);
        p=strlen(ch);
        for(i=0;i<p;i++)
        {
            if(ch[i]=='0')
                n+=6;
            else if(ch[i]=='1')
                n+=2;
            else if(ch[i]=='2')
                n+=5;
            else if(ch[i]=='3')
                n+=5;
            else if(ch[i]=='4')
                n+=4;
            else if(ch[i]=='5')
                n+=5;
            else if(ch[i]=='6')
                n+=6;
            else if(ch[i]=='7')
                n+=3;
            else if(ch[i]=='8')
                n+=7;
            else if(ch[i]=='9')
                n+=6;
        }
        printf("%lld leds\n",n);
    }
    return 0;
}
