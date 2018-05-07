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

bool ok(ll arr[], int n, int x,int m)
{
    ll cnt = 1, dist = 0, pnt = arr[0];
    for(ll i = 1; i < n && cnt <= m; i++)
    {
        if(arr[i]-pnt>=x)
        {
            pnt = arr[i];
            cnt++;
        }
    }
    return (cnt>=m);
}

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        ll n,m;
        scln(n);
        scln(m);
        ll arr[n];
        for(int i = 0; i < n; i++)
            scln(arr[i]);
        sort(arr,arr+n);
        ll lo = 1, hi = 1000000000, mid,res = 0;
        while(lo<=hi)
        {
            mid = lo + ((hi-lo)/2);
            if(ok(arr,n,mid,m))
            {
                res = mid;
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
        pf("%lld\n",res);
    }
    return 0;
}
