#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%llu",&(x))
#define pf              printf
#define ms(a,b)         memset(a,b,sizeof(a))
#define pb(a)           push_back(a)
#define mp              make_pair
#define db              double
#define EPS             10E-10
#define ff              first
#define ss              second
#define sqr(x)          (x)*(x)
#define vi              vector< int >
#define vl              vector< ll >
#define vii             vector<vector< int > >
#define vll             vector<vector< ll > >
#define DBG             pf("HI\n")
#define MOD             1000000007
#define CIN             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define RUN_CASE(t,T)   for(__typeof(t) t=1;t<=T;t++)
#define CASE(t)         printf("Case %d: ",t)
#define CASEL(t)        printf("Case %d:\n",t)
#define intlimit        2147483648
#define longlimit       9223372036854775808
#define infinity        (1<<28)
#define gcd(a, b)       __gcd(a,b)
#define lcm(a, b)       ((a)*(b)/gcd(a,b))
#define mx              1234567899
#define PI              2*acos(0.0)
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)


using namespace std;

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------


ll power(ll n, ll p,ll m)
{
    if(p==0) return 1%m;
    if(p==1) return n%m;
    ll x = power(n,p/2,m);
    x = ((x%m)*(x%m))%m;
    if(p%2)
        x = (x * (n%m))%m;
    return x;
}

vl Prime;
bool mark[10000007];

void Sieve()
{
    ll i, j, k, limit = sqrt(10000000.0) + 2;
    Prime.pb(2);
    mark[0] = mark[1] = 1;
    for(i = 4; i <= 10000000; i+=2)
        mark[i] = 1;
    for(i = 3; i < 10000000; i+=2)
    {
        if(!mark[i])
        {
            Prime.pb(i);
            if(i<=limit)
                for(j = i*i; j <= 10000000; j+=(i*2))
                    mark[j]=1;
        }
    }
}

bool isPrime(ll n)
{
    if(n<10000001)
        return !mark[n];
    int x = Prime.size();
    for(int i = 0; i < x && Prime[i]*Prime[i] <=n; i++)
        if(n%Prime[i]==0)
            return false;
    return true;
}

int main()
{
    Sieve();
    ll n,m;
    while(1)
    {
        scln(n);
        scln(m);
        if(n==0&&m==0) break;
        bool fg = false;
        if(!isPrime(n))
        {
            ll bigmod = power(m,n,n);
            ll mod = m%n;
            if(bigmod==mod)
                fg=true;
        }
        if(fg)
            printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

