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

bool cmp(int a,int b)
{
    return a>b;
}

set <ll> vv;

bool digit(ll n)
{
    ll p,num = 0;
    while(n)
    {
        vv.insert(n%10);
        n/=10;
        num++;
    }
    p = vv.size();
    vv.clear();
    return (num==p);
}

bool correct(ll m, ll n)
{
    ll p,q,num1=0,num2=0;
    while(m)
    {
        vv.insert(m%10);
        m/=10;
        num1++;
    }
    while(n)
    {
        vv.insert(n%10);
        n/=10;
        num2++;
    }
    p = vv.size();
    vv.clear();
    return ((num1+num2)==p);
}

int main()
{
//    freopen("input.txt","r",stdin);
    ll n,l=0;
    while(1)
    {
        scln(n);
        if(n==0) break;
        if(l==0) l=1;
        else puts("");
        bool f = 1;
        ll x,p;
//        cout<<digit(n)<<endl;
        for(ll i = 1000; i < 100000; i++)
        {
            x = i*n;
            if(x>99999)
            {
                break;
            }
            else if(x<10000);
            else if(digit(i)&&digit(x))
            {
                if(i<10000) p = i*10;
                else p = i;
                if(correct(x,p))
                {
                    f = 0;
                    pf("%lld / ",x);
                    if(i<10000) pf("0");
                    pf("%lld = %lld\n",i,n);
                }
            }
        }
        if(f) pf("There are no solutions for %d.\n",n);
    }
    return 0;
}
