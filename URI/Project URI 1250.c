#include<stdio.h>
#include<string.h>

int main()
{
    int n,t,i,j,p;
    scanf("%d",&n);
    for(t=1;t<=n;t++)
    {
        scanf("%d",&p);
        int ar[p],q=0;
        char ch[p+1];
        for(j=0;j<p;j++)
        {
            scanf("%d",&ar[j]);
        }
        getchar();
        gets(ch);
        for(j=0;j<p;j++)
        {
            if(((ar[j]==1||ar[j]==2)&&ch[j]=='J')||(ar[j]>2&&ch[j]=='S'))
                continue;
                q++;
        }
        printf("%d\n",q);
    }
}
