#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,chln,a,t,ts;
    scanf("%d",&ts);
    getchar();
    for(t=1;t<=ts;t++)
    {
        char ch[101],an[101];
        gets(ch);
        chln=strlen(ch);
        a=chln/2;
        k=a;
        for(i=0;k<chln;i++,k++)
        {
            an[k]=ch[i];
        }
        for(j=0;j<a;j++,i++)
        {
            an[j]=ch[i];
        }
        an[k--]='\0';
        for(;k>=0;k--)
            printf("%c",an[k]);
        printf("\n");
    }
    return 0;
}
