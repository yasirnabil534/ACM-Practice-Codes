#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,s=0;
    char ch[1001],k=38;
    gets(ch);
    n=strlen(ch);
    //printf("n=%d\n",n);
    for(i=n-2;i>0;i-=3)
    {
        if(ch[i]>='a'&&ch[i]<='z')
        {
            for(j=i-3;j>0;j-=3)
            {
                if(ch[i]==ch[j])
                {
                    ch[j]=k;
                }
            }
            s++;
            k++;
        }
    }
    printf("%d\n",s);
    return 0;
}
