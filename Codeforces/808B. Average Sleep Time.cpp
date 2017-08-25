#include<bits/stdc++.h>

using namespace std;

double Sum[2000000];

int main()
{
    int n,k,i,j;
    scanf("%d %d",&n,&k);
    double ar[n],sum=0,p;
    for(i=0;i<n;i++)
    {
        scanf("%lf",&ar[i]);
        if(i>0)
            Sum[i] = Sum[i-1] + ar[i];
        else
            Sum[i] = ar[i];
    }
    p = n-k+1;
    for(i=n-1,j=-1;j<p-1;i--,j++)
    {
        if(j>-1)
            sum += (Sum[i]-Sum[j]);
        else
            sum+= Sum[i];
    }
    printf("%.8f\n",sum/p);
    return 0;
}
