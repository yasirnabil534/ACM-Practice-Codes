#include<stdio.h>
#include<string.h>

int main()
{
    int T,t;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,i,j,m;
        scanf("%d",&n);
        m=n/2;
        char ch[8],ch2[8];
        int ar,k=0;
        printf("Case %d:\n",t);
        for(i=0;i<n;i++)
        {
            scanf(" %s",ch);
            if(strcmp(ch,"donate")==0)
            {
                scanf("%d",&ar);
                if(ar>=100)
                    k+=ar;
            }
            if(strcmp(ch,"report")==0)
                printf("%d\n",k);
        }

    }
    return 0;
}
