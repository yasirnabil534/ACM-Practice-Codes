#include<stdio.h>

int digit(int n)
{
    int i;
    for(i=1;;i++)
    {
        n=n/10;
        if(n==0)
            break;
    }
    return i;
}

int power10(int n)
{
    int i,p=1;
    for(i=1; i<=n; i++)
    {
        p*=10;
    }
    return p;
}

int main()
{
    int i,j,k,m,n,p,c,d,x,e,f,a[100];
    while((scanf("%d %d",&n,&m))!=EOF)
    {
        k=0;
        for(i=n; i<=m; i++)
        {
            p=0;
            c=0;
            d=digit(i);
            for(; d>0;d--)
            {
                x=power10(d);
                e=i%x;
                f=e/(x/10);
                a[p]=f;
                p++;
                for(j=0; j<p-1; j++)
                {
                    if(a[p-1]==a[j])
                    {
                        c=1;
                        break;
                    }
                }
            }
            if(c==0)
                k++;
        }
        printf("%d\n",k);
    }
    return 0;
}
