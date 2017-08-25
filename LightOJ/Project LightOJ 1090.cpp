#include<bits/stdc++.h>
#include<cstdio>

using namespace std;

int two[1000005],ftwo[1000005],five[1000005],ffive[1000005];

void Number2(void)
{
    int i,j,k,p;
    for(i=1;i<=1000000;i++)
    {
        j = 0;
        p = i;
        k = 2;
        while((p/k)>0)
        {
            j += (p/k);
            k *= 2;
        }
        ftwo[i] = j;
        p = i;
        k = 0;
        while(p%2==0)
        {
            k++;
            p/=2;
        }
        two[i] = k;
    }
}

void Number5(void)
{
    int i,j,k,p;
    for(i=1;i<=1000000;i++)
    {
        j = 0;
        p = i;
        k = 5;
        while((p/k)>0)
        {
            j += (p/k);
            k *= 5;
        }
        ffive[i] = j;
        p = i;
        k = 0;
        while(p%5==0)
        {
            k++;
            p/=5;
        }
        five[i] = k;
    }
}

int main()
{
    Number2();
    Number5();
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,r,p,q,fiveno,twono,f5,t2;
        scanf("%d %d %d %d",&n,&r,&p,&q);
        fiveno = ffive[n];
        twono = ftwo[n];
        f5 = fiveno - ffive[r];
        t2 = twono - ftwo[r];
        f5 -= ffive[n-r];
        t2 -= ftwo[n-r];
        f5 += (five[p]*q);
        t2 += (two[p]*q);
        if(f5>=t2)
            printf("Case %d: %d\n",t,t2);
        else
            printf("Case %d: %d\n",t,f5);
    }
    return 0;
}
