#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,bol=0;
    char in[101],ou[101];
    scanf("%s %s",in,ou);
    n=strlen(in);
    for(i=0,j=n-1;i<n;i++,j--)
    {
        if(ou[j]!=in[i])
            bol=1;
    }
    if(bol==0)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
