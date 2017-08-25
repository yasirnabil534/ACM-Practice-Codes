#include<iostream>
#include<cstdio>
#include<cmath>

bool pmark[5000001];
unsigned long long int phi[5000001];




void SeivePhi()
{
    int i,j,n;
    for(i=1;i<=5000000;i++) phi[i]=i;
    pmark[1]=1;
    for(i=2;i<=5000000;i++)
    {
        if(!pmark[i])
        {
            pmark[i]=1;
            for(j=i;j<=5000000;j+=i)
            {
                pmark[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
        phi[i]*=phi[i];
        phi[i]+=phi[i-1];
    }
}

int main()
{
    SeivePhi();
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int a,b,n,i;
        unsigned long long int x;
        scanf("%d %d",&a,&b);
        x=phi[b]-phi[a-1];
        printf("Case %d: %llu\n",t,x);
    }
    return 0;
}
