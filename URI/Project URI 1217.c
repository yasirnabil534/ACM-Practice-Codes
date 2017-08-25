#include<stdio.h>
#include<string.h>

int main()
{
    long int i,j,k,n,sp,la;
    scanf("%ld",&n);
    long int br[n];
    for(j=0;j<n;j++)
        br[j]=0;
    double ar[n],amav=0,kgav=0;
    for(i=1;i<=n;i++)
    {
        char ch[10000];
        sp=0;
        scanf("%lf",&ar[i-1]);
        getchar();
        gets(ch);
        la=strlen(ch);
        for(j=0;j<=la;j++)
        {
            if(ch[j-1]==ch[j]&&ch[j]==' ')
                continue;
            if(ch[j]==' '||ch[j]=='\0')
                br[i-1]++;
        }
        amav+=ar[i-1];
        kgav+=br[i-1];
    }
    for(k=1;k<=n;k++)
    {
        printf("day %ld: %ld kg\n",k,br[k-1]);
    }
    printf("%.2lf kg by day\nR$ %.2lf by day\n",kgav/n,amav/n);
    return 0;
}
