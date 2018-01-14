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

ll arr[30005];
ll tree[100005];

ll n,xam = -1;


void init(ll node, ll b,ll e)
{
    if(b > e) return;
    if(b == e)
    {
        tree[node] = b;
        return;
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (b + e) / 2;
    init(left, b, mid);
    init(right, mid + 1, e);
    if(arr[tree[left]]<arr[tree[right]]) tree[node] = tree[left];
    else tree[node] = tree[right];
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if(b > j || e < i)
        return 0;
    if(b >=i && e <= j)
    {
        return tree[node];
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (b + e) / 2;
    ll p = query(left, b, mid, i, j);
    ll q = query(right, mid + 1, e, i, j);
    if(p == 0) return q;
    else if(q == 0) return p;
    else if(arr[p]<arr[q]) return p;
    else return q;
}

ll getArea(ll b, ll e)
{
    if(b > e) return 0;
    if(b == e) return arr[b];
    ll nim = query(1, 1, n, b, e );
    ll left = getArea(b, nim - 1);
    ll right = getArea(nim + 1, e);
    ll ret = arr[nim] * (e - b + 1);
    ll xx = max(left,right);
    return max(ret,xx);
}

int main()
{
    int t, T;
    scin(T);
    RUN_CASE(t, T)
    {
        ms(arr,0);
        ms(tree,0);
        scln(n);
        for(ll i=1; i <= n; i++)
            scln(arr[i]);
        init(1, 1, n);
        xam = getArea(1 , n);
        CASE(t);
        pf("%lld\n", xam);
    }
    return 0;
}
