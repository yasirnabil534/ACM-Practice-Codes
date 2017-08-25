#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int a,b,n,i,digit,res,zero;
    char a1,b1[10001];
    while(1)
    {
        zero=0,res=0;
        char r[10000];
        scanf("%lld %s",&a,b1);
        if(a==0&&b1[0]=='0')
            break;
        for(digit=0,i=0;;digit++)
        {
            if(b1[digit]=='\0')
                break;
            if(b1[digit]!=(a+48))
            {
                r[i]=b1[digit];
                if(i==zero)
                    res++;
                if(b1[digit]=='0')
                    zero++;
                i++;
            }
        }
        r[i]='\0';
        if(i==0)
            printf("0\n");
        else if(i==zero)
            printf("%lld\n",atoll(r));
        else if(res>0)
            {
                for(i=res-1;r[i]!='\0';i++)
                    printf("%c",r[i]);
                printf("\n");
            }
        else
            printf("%s\n",r);
    }
    return 0;
}
