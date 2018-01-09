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

int ar[1000005];
int r8[10000005];
int freq[10000005];
int tree[30000005];

void init(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = freq[b];
        return;
    }
    int left = 2*node;
    int right = left + 1;
    int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = max(tree[left],tree[right]);
}

int query(int node, int b, int e, int lft, int rgt)
{
    if(lft>e||rgt<b)
        return 0;
    if(b>=lft&&e<=rgt)
    {
        return tree[node];
    }
    int left = 2*node;
    int right = left + 1;
    int mid = (b+e)/2;
    int q1 = query(left, b, mid, lft, rgt);
    int q2 = query(right, mid+1, e, lft, rgt);
    return max(q1,q2);
}

int main()
{
//    freopen("input.txt","r",stdin);
    int n;
    while(1)
    {
        scin(n);
        if(n==0) break;
        ms(ar,0);
        ms(freq,0);
        ms(tree,0);
        ms(r8,0);
        int m,lft,rgt,cnt=1;
        scin(m);
        for(int i=1;i<=n;i++)
        {
            scin(ar[i]);
        }
        ar[n+1] = intlimit-1;
        lft=1;
        rgt=2;
        while(rgt<=n+1)
        {
            if(ar[lft]==ar[rgt])
            {
                rgt++;
            }
            else
            {
                for(int i=lft,j=1;i<rgt;i++,j++)
                {
                    freq[i] = j;
                    r8[i] = rgt;
                }
                lft = rgt;
                rgt++;
            }
        }
//        for(int i=0;i<=n;i++)
//            cout<<r8[i]<<' ';
//        cout<<endl;
        init(1, 1, n);
        for(int i=1;i<=m;i++)
        {
            scin(lft);
            scin(rgt);
            int res,xx,dif;
            xx = r8[lft];
            dif = min((xx - lft),(rgt-lft+1));
            res = query(1,1,n,xx,rgt);
            res = max(dif, res);
            pf("%d\n",res);
        }
    }
    return 0;
}
