#include<stdio.h>
#include<string.h>

int main()
{
    int t,n,i,j,p,q,k;
    char a[1000000],b[1000000];
    scanf("%d",&t);
    for(i=1; i<=t; i++)
    {
        scanf("%s %s",a,b);
        p=strlen(a);
        q=strlen(b);
        if(q>p)
            printf("nao encaixa\n");
        else
        {
            n=0;
            for(j=q-1,k=p-1; j>=0; j--,k--)
            {
                if(a[k]!=b[j])
                {
                    n++;
                    break;
                }
            }
            if(n==0)
                printf("encaixa\n");
            else
                printf("nao encaixa\n");
        }
    }
    return 0;
}
