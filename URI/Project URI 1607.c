#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,p,n,k,t;
    char on[10001],to[10001];
    scanf("%d",&n);
    for(k=1; k<=n; k++)
    {
        scanf("%s %s",on,to);
        p=strlen(on);
        j=0;
        t=1;
        for(i=0; i<p; i++)
        {
            if(on[i]<'a'||on[i]>'z')
            {
                t=0;
                k--;
                break;
            }
            if(on[i]<=to[i])
                j+=to[i]-on[i];
            else
                j+=('z'-on[i])+(to[i]-'a')+1;
        }
        if(t==1)
            printf("%d\n",j);
    }
    return 0;
}
