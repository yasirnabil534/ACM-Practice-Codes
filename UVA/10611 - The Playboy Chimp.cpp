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

ll binary(ll arr[], ll BEG, ll END, ll x)     /// 1 4 5 7
{			          /// 4 6 8 10
	if(END<=BEG)
	{
		return END;
	}
	ll mid = (BEG+END)/2;
	if(arr[mid] == x)
	{
		return mid;
	}
	if(arr[mid]>x)
	{
		return binary(arr, BEG, mid-1, x);
	}
	else
	{
		return binary(arr, mid + 1, END, x);
	}
}

int main()
{
	ll n,q,x;
	scln(n);
	ll arr[n+1];
	arr[0] = -1;
	for(ll i = 1; i <= n; i++)
		scln(arr[i]);
	scln(q);
	for(ll i = 0; i < q; i++)
	{
		scln(x);
		ll pos = binary(arr, 1, n, x);
		///pf("%lld ",pos);
		if(pos<=1)
		{
			if(arr[pos]>x||pos==0)
				pf("X %lld\n",arr[1]);
			else if(arr[pos]==x){
				pf("X ");ll j;
				for(j = pos+1; arr[j]==x&&j<=n; j++);
				if(j<=n)pf("%lld\n",arr[pos+1]);
				else pf("X\n");
			}
			else
				pf("%lld %lld\n",arr[pos],arr[pos+1]);
		}
		else if(pos==n)
		{
			if(arr[pos]<x)
				pf("%lld X\n",arr[pos]);
			else if(arr[pos]==x)
			{
				ll j;
				for(j = pos-1; arr[j]==x&&j>0; j--);
				if(j>0) pf("%lld",arr[j]);
				else pf("X");
				pf(" X\n");
				
			}
			else
				pf("%lld %lld\n",arr[pos-1],arr[pos]);
		}
		else
		{
			if(arr[pos]<x)
			{
				pf("%lld %lld\n",arr[pos],arr[pos+1]);
			}
			else if(arr[pos]==x)
			{
				ll j;
				for(j = pos-1; arr[j]==x&&j>0; j--);
				if(j>0) pf("%lld ",arr[j]);
				else pf("X ");
				for(j = pos+1; arr[j]==x&&j<=n; j++);
				if(j<=n)pf("%lld\n",arr[j]);
				else pf("X\n");
			}
			else
			{
				pf("%lld %lld\n",arr[pos-1],arr[pos]);
			}
		}
	}
    return 0;
}