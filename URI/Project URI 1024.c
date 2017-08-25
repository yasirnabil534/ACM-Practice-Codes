#include <stdio.h>
#include <string.h>

int main()
{
    int n,i,j,b,c,p;
    char a[1000], m[1000];
    scanf("%d",&n);
    getchar();
    for(j=1;j<=n;j++)
    {
        gets(a);
        b=strlen(a);
        for(i=0;i<b;i++)
        {
            if((a[i]>='A'&&a[i]<='Z')||(a[i]>='a'&&a[i]<='z'))
            {
                a[i]+=3;
            }
        }
        for(i=b-1,p=0;i>=0;i--,p++)
        {
            m[p]=a[i];
        }
        m[p]='\0';
        c=p/2;
        for(p=c;p<b;p++)
        {
            m[p]-=1;
        }
        printf("%s\n",m);
    }
    return 0;
}
