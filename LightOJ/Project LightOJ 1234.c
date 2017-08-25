#include<stdio.h>
#include<math.h>
#define gama 0.57721566490153286060651209


double ar[100001];

int main()
{
    int t,T,i;
    ar[0] = 0;
    for(i=1;i<=100000;i++)
    {
        ar[i] = ar[i-1]+(1.0/(i*1.0));
    }
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n;
        scanf("%d",&n);
        if(n<=100000)
            printf("Case %d: %.10lf\n",t,ar[n]);
        else
            printf("Case %d: %.10lf\n",t,(log(n+.5)+gama));
    }
    return 0;
}
