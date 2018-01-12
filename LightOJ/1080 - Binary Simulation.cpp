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

ll ar[100005],br[100005],cm[100005];

struct Data
{
    ll prop,sum;
    Data()
    {
        prop = 0;
        sum = 0;
    }
};

Data tree[300005];

void init(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node].sum = ar[e];
        return;
    }
    ll left = node*2;
    ll right = left + 1;
    ll mid = (b + e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node].sum = tree[left].sum + tree[right].sum;
}

ll query(ll node, ll b, ll e, ll lft, ll rgt, ll carry=0)
{
    if(b > rgt||e < lft)
        return 0;
    if(b == e)
    {
        return (tree[node].sum + (e -b + 1) * carry)%2;
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (b + e)/2;

    ll p1 = query(left, b, mid, lft, rgt, carry + tree[node].prop);
    ll p2 = query(right, mid + 1, e, lft, rgt, carry + tree[node].prop);
    return p1 + p2;
}

void update(ll node, ll b, ll e, ll lft,ll rgt,ll x)
{
    if(b > rgt||e < lft)
        return;
    if(b >= lft && e <= rgt)
    {
        tree[node].sum = (e - b + 1) - tree[node].sum;
        tree[node].prop += x;
        return;
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (b + e)/2;
    update(left, b, mid, lft, rgt, x);
    update(right, mid + 1, e, lft, rgt, x);
    tree[node].sum = tree[left].sum + tree[right].sum + (e - b + 1) * tree[node].prop;
}

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        ms(ar,0);
        ms(tree,0);
        getchar();
        ll n, m, op, si, ei;
        char ch,str[100005];
        sc("%s",str);
        n = strlen(str);
        for(int i = 0;i < n; i++)
            ar[i+1] = str[i] - '0';
        scln(m);
        init(1, 1, n);
        CASEL(t);
        for(ll i = 1; i <= m; i++)
        {
            getchar();
            ch = getchar();

            scln(si);
            if(ch == 'I')
            {
                scln(ei);
                update(1, 1, n, si, ei, 1);
            }
            else if(ch == 'Q')
            {
                pf("%lld\n",query(1, 1, n, si, si));
            }
        }
    }
    return 0;
}
