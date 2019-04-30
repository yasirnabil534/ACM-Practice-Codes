#include<bits/stdc++.h>

#define ll              long long int
#define sc              scanf
#define scin(x)         sc("%d",&(x))
#define scln(x)         sc("%lld",&(x))
#define pf              printf

using namespace std;

ll Bigmod(ll base, ll power, ll mod){if(power==0) return 1%mod; if(power==1) return base%mod; ll x = Bigmod(base,power/2,mod); x = (x*x)%mod; if(power%2){x = (x*(base%mod))%mod;}return x;}

ll cnt;
char ch1[1000006], ch2[1000006];

ll Hash(const string &s, ll m, ll B, ll M)
{
    ll h = 0, power = 1;
    for(ll i = m - 1; i >= 0; i--)
    {
        h = h + (s[i] * power) % M;
        h = h % M;
        power = (power * B)%M;
    }
    return h;
}

void match(const string &text, const string &pattern)
{
    ll n = (ll)text.size();
    ll m = (ll)pattern.size();
    if(n < m) return;
    if(m == 0 || n == 0) return;
    ll B = 347, M1 = 10000000+7, M2 = 10000000+3;

    ll power1 = Bigmod(B, m - 1, M1);
    ll power2 = Bigmod(B, m - 1, M2);

    ll hash_text1 = Hash(text, m, B, M1);
    ll hash_text2 = Hash(text, m, B, M2);
    ll hash_pattern1 = Hash(pattern, m, B, M1);
    ll hash_pattern2 = Hash(pattern, m, B, M2);

    if(hash_text1 == hash_pattern1 && hash_text2 == hash_pattern2)
        cnt++;

    for(ll i = m; i < n; i++)
    {
        hash_text1 = (hash_text1 - (power1*text[i - m])%M1)%M1;
        hash_text1 = (hash_text1 + M1) % M1;
        hash_text1 = (hash_text1 * B) % M1;
        hash_text1 = (hash_text1 + text[i])%M1;

        hash_text2 = (hash_text2 - (power2*text[i - m])%M2)%M2;
        hash_text2 = (hash_text2 + M2) % M2;
        hash_text2 = (hash_text2 * B) % M2;
        hash_text2 = (hash_text2 + text[i])%M2;

        if(hash_text1==hash_pattern1 && hash_text2 == hash_pattern2)
        {
            cnt++;
        }
    }
}

int main()
{
    int t,T;
    scin(T);
    for(t = 1; t <= T; t++)
    {
        sc("%s %s",ch1,ch2);
        string str(ch1), str2(ch2);
        cnt = 0;
        match(str, str2);
        pf("Case %d: %lld\n",t,cnt);
    }
    return 0;
}
