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
#define all(v)          v.begin(),v.end()
#define rep(i,a,b)      for(__typeof(i) i=a; i<=b; i++)
#define rev(i,a,b)      for(__typeof(i) i=a; i>=b; i--)

using namespace std;

template<typename T>inline T POW(T B,T P){ if(P==0) return 1; if(P&1) return B*POW(B,P-1);  else return sqr(POW(B,P/2));}
ll Bigmod(ll base, ll power, ll mod){if(power==0) return 1%mod; if(power==1) return base%mod; ll x = Bigmod(base,power/2,mod); x = (x*x)%mod; if(power%2){x = (x*(base%mod))%mod;}return x;}
ll Mulmod(ll base, ll power, ll mod){if(power==0) return 0; if(power==1) return base%mod; ll x = Mulmod(base,power/2,mod); x = (x+x)%mod; if(power%2){x = (x+(base%mod))%mod;}return x;}
ll BigMulmod(ll base, ll power, ll mod){if(power==0) return 1%mod; if(power==1) return base%mod; ll x = BigMulmod(base,power/2,mod); x = Mulmod(x,x,mod); if(power%2){x = Mulmod(x,(base%mod),mod);}return x;}
bool isVowel(char ch){ ch=toupper(ch); if(ch=='A'||ch=='U'||ch=='I'||ch=='O'||ch=='E') return true; return false;}
ll ModInverse(ll number, ll mod){return Bigmod(number, mod-2, mod);}
bool isConso(char ch){if (isalpha(ch) && !isVowel(ch)) return true; return false;}
int toInt(string s)  { int sm; stringstream ss(s); ss>>sm; return sm; }
bool isPrime( ll val ) { if( val == 2 ) return true ; if( val % 2 == 0 || val == 1 ) return false ; ll sqrt_N = (ll) ( ( double ) sqrt( val ) ) ; for( ll i = 3 ; i <= sqrt_N ; i += 2 ) { if( val % i == 0 ) return false ; } return true ; }
template<class T> string convert(T _input) { stringstream blah; blah << _input; return blah.str(); }
int distchar(char a, char b){int x = ((a - b)+26)%26;int y = ((b-a)+26)%26;return min(x,y);}

/**
// Ordered set
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
template<typename T> using orderset = tree<T,null_type,less<T>,rb_tree_tag,tree_order_statistics_node_update>;
//orderset<int> s ; //orderset<int>::iterator it ;
//orderset<int> X; //X.insert(1); //X.insert(2); //X.insert(4); //X.insert(8); //X.insert(16);
//cout<<*X.find_by_order(1)<<endl; // 2 //cout<<*X.find_by_order(2)<<endl; // 4 //cout<<*X.find_by_order(4)<<endl; // 16 //cout<<(end(X)==X.find_by_order(6))<<endl; // true
//cout<<X.order_of_key(-5)<<endl;  // 0 //cout<<X.order_of_key(1)<<endl;   // 0 //cout<<X.order_of_key(3)<<endl;   // 2 //cout<<X.order_of_key(4)<<endl;   // 2 //cout<<X.order_of_key(400)<<endl; // 5
*/

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

const int MX = 2005;
int n;  /// n is the number of queries
char text[1000006];
char dictionary[MX][MX];
const int goes = 127; /// If MLE comes, set it to 27 for only lowercase letters

struct NODE
{
    int cnt;
    bool vis;
    NODE *next[goes];
    vector<NODE *> out;
    NODE()
    {
        for(int i = 0; i < goes; i++)
            next[i] = NULL;
        out.clear();
        vis = false;
        cnt = 0;
    }
    ~NODE()
    {
        for(int i = 1; i < goes; i++)
            if(next[i]!=NULL && next[i] != this)
                delete next[i];
    }
};

NODE *root;

void buildtrie()
{
    root = new NODE();
    for(int i = 0; i < n; i++)
    {
        NODE *p = root;
        for(int j = 0; dictionary[i][j]; j++)
        {
            char c = dictionary[i][j]; /// - 'a' + 1; ///uncomment it for only lowercase letters
            if(!p->next[c])
                p->next[c] = new NODE();
            p = p->next[c];
        }
    }
    queue<NODE *> q;
    for(int i = 0; i < goes; i++)
    {
        if(!root->next[i])
            root->next[i] = root;
        else
        {
            q.push(root->next[i]);
            root->next[i]->next[0] = root;  /// next[0] is back pointer
        }
    }
    while(!q.empty())
    {
        NODE *u = q.front();
        q.pop();
        for(int i = 1; i < goes; i++)
        {
            if(u->next[i])
            {
                NODE *v = u->next[i];
                NODE *w = u->next[0];
                while(!w->next[i])
                    w = w->next[0];
                v->next[0] = w = w->next[i];
                w->out.pb(v);
                q.push(v);
            }
        }
    }
}

void aho_corasick()
{
    NODE *p = root;
    for(int i = 0; text[i]; i++)
    {
        char c = text[i]; /// - 'a' + 1;  ///uncomment it for only lowercase letters
        while(!p->next[c])
            p = p->next[0];
        p = p->next[c];
        p->cnt++;
    }
}

int DFS(NODE *p)
{
    if(p->vis) return p->cnt;
    for(int i = 0; i < (int)p->out.size(); i++)
        p->cnt += DFS(p->out[i]);
    p->vis = true;
    return p->cnt;
}


int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        sc("%s",text);
        scin(n);
        for(int i = 0; i < n; i++){
            sc("%s",dictionary[i]);
        }
        buildtrie();
        aho_corasick();
        for(int i = 0; i < n; i++)
        {
            NODE *p = root;
            for(int j = 0; dictionary[i][j]; j++)
            {
                char c = dictionary[i][j];
                p = p->next[c];
            }
            int x = DFS(p);
            if(x==0) pf("n\n");
            else pf("y\n");
        }
        delete root;
    }
    return 0;
}
