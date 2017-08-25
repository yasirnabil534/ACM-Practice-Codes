#include<stdio.h>
#include<math.h>

int j;
double ar[1000001];

int main()
{
    for(j=1 ;j<=1000000 ;j++)
        ar[j]=log10(j*1.0)+ar[j-1];
    int T,t;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        long long int k=0,n,b;
        double i,p=0;
        scanf("%lld %lld",&n,&b);
        p += ar[n]/log10(b*1.0);
        k = floor(p);
        printf("Case %d: %lld\n",t,k+1);
    }
    return 0;
}
