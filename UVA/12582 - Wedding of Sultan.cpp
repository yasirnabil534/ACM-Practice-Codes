
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
#define CASEL(t)        printf("Case #%d:\n",t)
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

int nodes[200];

char pp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main()
{
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        char stk[1000];
        int n,top=1;
        memset(nodes,0,sizeof(nodes));
        char str[1000];
        sc("%s",str);
        n = strlen(str);
        stk[0] = 244;
        stk[top]=str[0];
        for(int i = 1; i < n; i++)
        {
            if(stk[top]==str[i])
            {
                    top--;
                    nodes[str[i] - 'A']++;
                    if(top>0)nodes[stk[top] - 'A']++;
            }
            else
            {
                top++;
                stk[top] = str[i];
            }
        }
        nodes[str[0]-'A']--;
        pf("Case %d\n",t);
        for(int i = 0; i <26; i++)
        {
            if(nodes[i]>0)
                pf("%c = %d\n",pp[i],nodes[i]);
        }
    }

    return 0;
}
