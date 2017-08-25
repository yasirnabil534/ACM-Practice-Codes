#include<bits/stdc++.h>

using namespace std;

long long int prime[70000],nprime=0;
int mark[70000];

void Seieve()
{
    long long int i,j,k,limit = sqrt(70000*1.0)+2;
    prime[nprime++]=2;
    mark[1]=1;
    for(i=4; i<70000; i+=2)
        mark[i]=1;
    for(i=3; i<70000; i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=limit; j+=(i*2))
                    mark[j]=1;
            }
        }
    }
}

long long int power(long long int a,long long int b)
{
    a%=1000000007;
    long long int i,j=1;
    if(b==0)
    {
        j=1;
        return j;
    }
    else if(b==1)
    {
        j = a%1000000007;
        return j;
    }
    else if(b%2==0)
    {
        j = power(a,b/2);
        j%=1000000007;
        j*=j;
        return j%1000000007;
    }
    else if(b%2!=0)
    {
        j = power(a,b/2);
        j%=1000000007;
        j*=j;
        j%=1000000007;
        j *= (a%1000000007);
        return j%1000000007;
    }
    j%=1000000007;
    return j;
}

/**int power(long long int b, long long int e)
{
    long long int res = 1,m=1000000007;
    for (; e; e >>= 1, b = b*b%m) if (e & 1) res = res*b%m;
    return res;
}*/

long long int egcd(long long int a,long long int b,long long int *X,long long int *Y)
{
    if(b==0)
    {
        *X=1;
        *Y=0;
        return a;
    }
    long long int d,x,y;
    d = egcd(b,a%b,&x,&y);
    *Y=x-(a/b)*y;
    *X=y;
    return d;
}

/**void extEuclid(long long int a, long long int b, long long int &x, long long int &y, long long int &gcd)
{
    x = 0;
    y = 1;
    gcd = b;
    int m, n, q, r;
    for (int u=1, v=0; a != 0; gcd=a, a=r)
    {
        q = gcd / a;
        r = gcd % a;
        m = x-u*q;
        n = y-v*q;
        x=u;
        y=v;
        u=m;
        v=n;
    }
}*/

/// The result could be negative, if it's required to be positive, then add "m"
/**long long int modInv(long long int n,long long int m)
{
    long long int x,y,gcd;
    gcd = egcd(n, m, &x, &y);
    if (gcd == 1) return x % m;
    return 0;
}*/

int main()
{
    Seieve();
    int t,T;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        long long int i,j,p,n,m,sod=1,tmp=0,tmp2,x,y;
        scanf("%lld %lld",&n,&m);
        p=n;
        ///p%=1000000007;
        for(i=0; i<nprime&&prime[i]*prime[i]<=p; i++)
        {
            j=0;
            while(p%prime[i]==0)
            {
                p/=prime[i];
                j++;
            }
            if(j>0)
            {
                tmp = power(prime[i],j);
                tmp%=1000000007;
                tmp = power(tmp,m);
                tmp%=1000000007;
                tmp*= (prime[i]%1000000007);
                egcd((prime[i]-1),1000000007,&x,&y);
                x= ((x%1000000007)+1000000007)%1000000007;
                sod *= ((tmp-1)+1000000007)%1000000007;
                sod%=1000000007;
                sod*= x;
                sod%=1000000007;
            }
        }
        if(p>1)
        {
            tmp = power(p,m);
            tmp%=1000000007;
            tmp*=(p%1000000007);
            egcd((p-1),1000000007,&x,&y);
            x= ((x%1000000007)+1000000007)%1000000007;
            sod *= ((tmp-1)+1000000007)%1000000007;
            sod%=1000000007;
            sod*= x;
            sod%=1000000007;
        }
        printf("Case %d: %lld\n",t,sod);
    }
    return 0;
}
