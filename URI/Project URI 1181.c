
#include <stdio.h>

int main() {

    int x,n,i,j,k,p,q;
    char ch;
    double M[12][12],sum=0.0;
    scanf("%d",&n);
    scanf(" %c",&ch);
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(i=0;i<12;i++)
    {
        for(j=0;j<12;j++)
        {
            if(i==n)
            {
                sum+=M[i][j];
            }
        }
    }
    if(ch=='S')
    {
        printf("%0.1lf\n",sum);
    }
    else if(ch=='M')
    {
        printf("%0.1lf\n",sum/12.0);
    }

    return 0;
}
