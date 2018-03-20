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
int visited[105][105];
map <char, int> Mp,dir;

char dirr[] = "NLSO";

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
    Mp['L'] = 2;
    Mp['O'] = 3;
    dir['L'] = 1;
    dir['O'] = 3;
    dir['S'] = 2;
    dir['N'] = 0;
    int z,n,m,x,y;
    char ch;
    int t,T;
    while(true)
    {
        scin(n);
        scin(m);
        scin(x);
        if(n==0&&m==0&&x==0) break;
        char str[n][m+1];
        getchar();
        for(int i = 0;i < n; i++)
        {
            sc("%s",str[i]);
            getchar();
        }
        int column = x-1, row = 0, cnt = 0, i = 0, add;
        char pos;
        for(i = 0;i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(str[i][j]=='N'||str[i][j]=='S'||str[i][j]=='L'||str[i][j]=='O')
                {
                    row = i;
                    column = j;
                    pos = str[i][j];
                }
            }
        }
        bool fg = false;
        while(x--)
        {
            if(fg) break;
            ch = getchar();
            if(ch=='Q') fg = true;
            else if(ch=='E'||ch=='D')
            {
                if(ch=='E') add = -1;
                if(ch=='D') add = +1;
                pos = dirr[(((dir[pos]+add)%4)+4)%4];
                //cout<<pos<<endl;
            }
            else if(ch=='F')
            {
                int p = row + fx[Mp[pos]];
                int q = column + fy[Mp[pos]];
                if(isCorrect(p,q,n,m)&&str[p][q]!='#')
                {
                    row = p;
                    column = q;
                    if(str[p][q]=='*')
                    {
                        str[p][q] = '.';
                        cnt++;
                    }
                }
                //cout<<row<<' '<<column<<endl;
            }
        }
        pf("%d\n",cnt);
    }
    return 0;
}
