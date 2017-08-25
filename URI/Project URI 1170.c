#include <stdio.h>

int main() {

    long long int i,c,j,a,m,n,p;
    double k;
    for(n=1;;n++)
    {
        scanf("%lld",&c);
        if(c>=0)
            break;
    }
    for(i=1;i<=c;i++)
    {
        for(p=1;;p++)
        {
            scanf("%lf",&k);
            if(k>=0)
            break;
        }
        m=0;
        for(j=1;k>1;j++)
        {
            k/=2;
            m++;
            //a=k;
        }
        printf("%lld dias\n",m);
    }

    return 0;
}

