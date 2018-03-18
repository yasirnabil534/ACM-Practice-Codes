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
const int fx[] = {+1,-1,+0,+0};
const int fy[] = {+0,+0,+1,-1};
///const int fx[] = {+0,+0,+1,-1,-1,+1,-1,+1}; ///King's move
///const int fy[] = {-1,+1,+0,+0,+1,+1,-1,-1}; ///king's Move
///const int fx[] = {-2,-2,-1,-1,+1,+1,+2,+2}; ///knight's move
///const int fy[] = {-1,+1,-2,+2,-2,+2,-1,+1}; ///knight's move
///---------------------------------------------------------------

vector <int> graph[10005];
int visited[10005][10005];
map <char, int> Mp;

bool isCorrect(int x, int y, int m, int n)
{
    if(x>=0&&y>=0&&x<m&&y<n)
        return true;
    return false;
}

int main()
{
    Mp['N'] = 1;
    Mp['S'] = 0;
    Mp['E'] = 2;
    Mp['W'] = 3;
    int n,m,x;
    while(true)
    {
        scin(n);
        scin(m);
        scin(x);
        if(n==0&&m==0&&x==0) break;
        for(int i = 0; i < 10000; i++) ms(visited[i],0);
        char str[n][m+1];
            getchar();
        for(int i = 0;i < n; i++)
        {
            sc("%s",str[i]);
        }
        int column = x-1, row = 0, cnt = 0, i = 0, ans;
        while(1)
        {
            if(!isCorrect(row, column, n, m))
            {
                //pf("NOPE\n");
                cnt = 1;
                ans = i;
                break;
            }
            else if(visited[row][column]==0)
            {
                //pf("%c\n",str[row][column]);
                i++;
                visited[row][column] = i;
                int p = fx[Mp[str[row][column]]];
                int q = fy[Mp[str[row][column]]];
                row += p;
                column += q;
            }
            else
            {
                //pf("Crack\n");
                cnt = 2;
                ans = visited[row][column]-1;
                break;
            }
        }
        if(cnt==1)
            pf("%d step(s) to exit\n",ans);
        else if(cnt==2)
            pf("%d step(s) before a loop of %d step(s)\n",ans,i-ans);
    }
    return 0;
}


/**

3 6 5
NEESWE
WWWESS
SNWWWW
4 5 1
SESWE
EESNW
NWEEN
EWSEN
0 0 0

*/

