#include<stdio.h>
#include<string.h>

int main()
{
    char gs[100000],hs[100000],tot[100000];
    int i,j=0,k=0,a=0,p,n,m,x;
    scanf("%s %s %s",gs,hs,tot);
    n=strlen(gs);
    m=strlen(hs);
    x=strlen(tot);
    p=0;
    for(i=0;i<n;i++)
    {
        for(p=0;p<x;p++)
        {
            if(gs[i]==tot[p])
            {
                tot[p]='0';
                gs[i]='1';
                break;
            }
        }
    }
    p=0;
    for(i=0;i<m;i++)
    {
        for(p=0;p<x;p++)
        {
            if(hs[i]==tot[p])
            {
                tot[p]='0';
                hs[i]='1';
                break;
            }
        }
    }
    for(i=0;i<x;i++)
    {
        if(tot[i]=='0')
            a++;
    }
    for(i=0;i<n;i++)
    {
        if(gs[i]=='1')
            j++;
    }
    for(i=0;i<m;i++)
    {
        if(hs[i]=='1')
            k++;
    }
    //printf("tot=%s\n",tot);
    //printf("hd=%s\n",hs);
    //printf("gs=%s\n",gs);
    if(a==x&&j==n&&k==m)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}

