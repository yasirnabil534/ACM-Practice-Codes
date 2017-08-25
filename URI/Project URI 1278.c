#include<stdio.h>
#include<string.h>

int main()
{
    int N,start = 0;
    while(1)
    {
        scanf("%d",&N);
        getchar();
        if(N==0)
            break;
        if(start==1)
            printf("\n");
        int t,i,j,n,p,key,ar[N],max;
        char ch[N][55],ans[N][55];
        for(t=0;t<N;t++)
        {
            gets(ch[t]);
            n=strlen(ch[t]);
            key=0;
            for(i=0,j=0;i<n;i++)
            {
                if(ch[t][i]!=' ')
                {
                    key=1;
                    ans[t][j++]=ch[t][i];
                }
                else if(ch[t][i]==' '&&key==1)
                {
                    key=0;
                    ans[t][j++]=' ';
                }
            }
            if(ans[t][j-1]!=' ')
                ans[t][j]='\0';
            else
                ans[t][j-1]='\0';
        }
        for(i=0;i<N;i++)
            ar[i] = strlen(ans[i]);
        max=ar[0];
        for(i=1;i<N;i++)
            if(ar[i]>max)
                max=ar[i];
        for(j=0;j<N;j++)
        {
            for(i=0;i<(max-ar[j]);i++)
                printf(" ");
            printf("%s\n",ans[j]);
        }
        start = 1;
    }
    return 0;
}
