
#include <stdio.h>

int main() {

    int x,i,j,k,q;
    char ch;
    double M[12][12],sum=0.0,p=0.0;
    scanf("%c",&ch);
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
            if(j>i)
            {
                sum+=M[i][j];
                p++;
            }
        }
    }
    if(ch=='S')
    {
        printf("%0.1lf\n",sum);
    }
    else if(ch=='M')
    {
        printf("%0.1lf\n",sum/p);
    }

    return 0;
}

