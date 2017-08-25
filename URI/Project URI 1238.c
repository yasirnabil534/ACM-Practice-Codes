#include<stdio.h>
#include<string.h>

int main()
{
    int i,n,k,x,y,j;
    char a[51],b[51],c[101];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=0;
        scanf("%s %s",a,b);
        x=strlen(a);
        y=strlen(b);
        if(x>=y)
        {
            for(j=0;j<y;j++)
            {
                c[k]=a[j];
                k++;
                c[k]=b[j];
                k++;
            }
            for(j=y;j<x;j++)
            {
                c[k]=a[j];
                k++;
            }
            c[k]='\0';
        }
        else if(x<y)
        {
            for(j=0;j<x;j++)
            {
                c[k]=a[j];
                k++;
                c[k]=b[j];
                k++;
            }
            for(j=x;j<y;j++)
            {
                c[k]=b[j];
                k++;
            }
            c[k]='\0';
        }
        /**else if(x==y)
        {
            for(j=0;j<y;j++)
            {
                c[k]=a[j];
                k++;
                c[k]=b[j];
                k++;
            }
        }*/
        printf("%s\n",c);
    }
}
