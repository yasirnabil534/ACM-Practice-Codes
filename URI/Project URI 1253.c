#include<stdio.h>
#include<string.h>

int  main()
{
    int i,j,k,x,y,p,q,m,n;
    char a[51],b[51];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",a);
        scanf("%d",&m);
        x=strlen(a);
        for(j=0;j<x;j++)
        {
            if(a[j]-m>=65)
            {
                b[j]=a[j]-m;
            }
            else if(a[j]-m<65)
            {
                b[j]=a[j]-m+'Z'-'A'+1;
            }
        }
        b[j]='\0';
        printf("%s\n",b);
    }
    return 0;
}
