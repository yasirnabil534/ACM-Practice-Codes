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

struct Data
{
    ll prop,sum;
    Data()
    {
        prop = 0;
        sum = 0;
    }
};

ll arr[100005];
Data tree[300005];

void init(ll node, ll b, ll e)
{
    if(b==e)
    {
        tree[node].sum = arr[b];
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
    if(b >= lft && e <= rgt)
    {
        return tree[node].sum + (e -b + 1) * carry;
    }
    ll left = node * 2;
    ll right = left + 1;
    ll mid = (b + e)/2;

    ll q1 = query(left, b, mid, lft, rgt, carry + tree[node].prop);
    ll q2 = query(right, mid + 1, e, lft, rgt, carry + tree[node].prop);
    return q1 + q2;
}

void update(ll node, ll b, ll e, ll lft,ll rgt,ll x)
{
    if(b > rgt||e < lft)
        return;
    if(b >= lft && e <= rgt)
    {
        tree[node].sum += ((e - b + 1)*x);
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
        ms(tree, 0);
        ll n,m,p,q,v,c;
        scln(n);
        scln(m);
        init(1,1,n);
        for(int i = 1;i <= m; i++)
        {
            scln(c);
            scln(p);
            scln(q);
            if(c==1)
            {
                pf("%lld\n",query(1, 1, n, p, q));
            }
            else if(c==0)
            {
                scln(v);
                update(1, 1, n, p, q, v);
            }
        }
    }
    return 0;
}
