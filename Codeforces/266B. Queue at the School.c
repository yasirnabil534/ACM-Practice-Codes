#include<stdio.h>

int main()
{
    int i,j,k,n;
    scanf("%d %d",&n,&k);
    char ch[n+1],t;
    scanf("%s",ch);
    //k--;
    for(i=1;i<=k;i++)
        for(j=1;j<n;j++)
        {
            if(ch[j]=='G'&&ch[j-1]=='B')
            {
                t=ch[j];
                ch[j]=ch[j-1];
                ch[j-1]=t;
                j++;
            }
        }
    printf("%s\n",ch);
    return 0;
}
