/**
Approach:
1. First we calculate Prime numbers till 10^7 by Sieve Prime.
2. Then we calculate prime from m to n with a complexity O(sqrt(n))with help of a for
   loop and isPrime function cause they said difference of m and n will be 10^6.
3. Then for every case we check the nearest prime of m, x where (x>=m) and check every
   two adjacent prime till n and check the least difference prime and most difference primes and
   save in a,b and c,d.
   #Now a,b and c,d are the required answers.
*/

#include<bits/stdc++.h>

#define ll              long long int
#define ull             unsigned long long int
#define pii             pair < int, int>
#define pll             pair < ll, ll>
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
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
#define mx              123456789

using namespace std;

///--------------Graph Moves--------------------------------------
///const int fx[] = {+1,-1,+0,+0};
///const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fx[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vl Prime;
bool mark[10000007];

void Sieve()
{
    ll i,j,n,limit;
    n = 10000000;
    limit = sqrt(n*1.0) + 4;
    mark[0] = mark[1] = 1;
    Prime.pb(2);
    for(i=4; i<=n; i+=2) mark[i] = 1;
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            Prime.pb(i);
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=(i*2))
                    mark[j] = 1;
            }
        }
    }
}

bool isPrime(ll n)
{
    if(n<=10000000) return !(mark[n]);
    for(int i=0; Prime[i]*Prime[i]<=n&&i<Prime.size(); i++)
    {
        if(n%Prime[i]==0) return false;
    }
    return true;
}

int main()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    Sieve();
    ll a,b,c,d,n,m,x,y,p,q;
    while(sc("%lld %lld",&m,&n)!=EOF)
    {
        a = b = c = d = x = y = p = q = 0;
        ll xam = -10000, nim = infinity;
        ll i,j,mmaxx = 10000000;
        bool flag = false;
        ll arr[100005];
        if(m<=mmaxx&&n<=mmaxx)
        {
            j=0;
            for(i=0;i<Prime.size();++i)
            {
                if(Prime[i]>=m&&Prime[i]<=n)
                    arr[j++] = Prime[i];
                if(Prime[i]>n) break;
            }
        }
        else
        {
            j=0;
            if(m%2==0) m++;
            for(i = m; i <= n; i+=2)
            {
                if(isPrime(i))
                    arr[j++] = i;
            }
        }
        p = j;
        for(i=1;i<p;i++)
        {
            x = arr[i] - arr[i-1];
            if(nim > x)
            {
                a = arr[i-1];
                b = arr[i];
                nim = x;
            }
            if(xam < x)
            {
                c = arr[i-1];
                d = arr[i];
                xam = x;
            }
        }
        if(c==0||a==0)
            pf("There are no adjacent primes.\n");
        else
            pf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,c,d);
    }
    return 0;
}
