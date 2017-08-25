#include <stdio.h>

int main() {

    int N,i;
    double t=0,c=0,r=0,s=0,m,j,k;
    scanf("%d",&N);
    int ar[N];
    char br[N];
    for(i=0;i<N;i++)
    {
        scanf("%d %c",&ar[i],&br[i]);
        t+=ar[i];
        if(br[i]=='C'||br[i]=='c')
        {
            c+=ar[i];
        }
        else if(br[i]=='R'||br[i]=='r')
        {
            r+=ar[i];
        }
        else if(br[i]=='S'||br[i]=='s')
        {
            s+=ar[i];
        }
    }
    m=(c/t)*100;
    j=(r/t)*100;
    k=(s/t)*100;
    printf("Total: %0.0lf cobaias\nTotal de coelhos: %0.0lf\nTotal de ratos: %0.0lf\nTotal de sapos: %0.0lf\nPercentual de coelhos: %0.2lf %\nPercentual de ratos: %0.2lf %\nPercentual de sapos: %0.2lf %",t,c,r,s,m,j,k);

    return 0;
}

