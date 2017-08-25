#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,k,i,j;
    char ch[48]= "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    char ar;
    //gets(ar);
    for(k=0;(scanf("%c",&ar))!=EOF; k++)
    {
            for(j=0; j<48; j++)
            {
                if(ar==ch[j])
                {
                    ar=ch[j-1];
                    printf("%c",ar);
                    a=1;
                    break;
                }
                else if(ar==' ')
                {
                    printf(" ");
                    a=1;
                    break;
                }
                else if(ar=='\n')
                {
                    printf("\n");
                    a=1;
                    break;
                }
            }
    }
    return 0;
}
