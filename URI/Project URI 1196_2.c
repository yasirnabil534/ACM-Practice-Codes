#include<stdio.h>
#include<string.h>

int main()
{
    long long int a,k,i,j;
    char ch[4][14]= {"`1234567890-=","QWERTYUIOP[]\\","ASDFGHJKL;'","ZXCVBNM,./"};
    char ar;
    for(k=0;(scanf("%c",&ar))!=EOF; k++)
    {
        a=0;
        for(i=0; i<4; i++)
        {
            for(j=0; j<strlen(ch[i]); j++)
            {
                if(ar==ch[i][j])
                {
                    ar=ch[i][j-1];
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
            if(a==1)
                break;
        }
    }
    return 0;
}

