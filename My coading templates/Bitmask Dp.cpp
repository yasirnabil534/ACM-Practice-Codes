/// Bitmask DP template (Upto 2^12)
ull Set(ull n, int pos) {return n = n|(1<<pos);}
ull Unset(ull n, int pos) {return n=n&~(1<<pos);}
bool check(ull n, int pos){return (bool)(n&(1<<pos));}

int dp[(1<<12)+5];

int Bitmask(ull mask)
{
    if(dp[mask]>-1) return dp[mask];
    int ans = 0;
    int k = 1;
    for(int i = 0; i < 12; i++)
    {
        ans += check(mask,i);
    }
    for(int i = 0; i < 12; i++)
    {
        if(i < 10 && check(mask,i) && check(mask, i + 1) && !check(mask, i + 2))
        {
            ull x = mask;
            x = Unset(x, i);
            x = Unset(x, i + 1);
            x = Set(x, i + 2);
            ans = min(ans,Bitmask(x));
        }
        if(i > 1 && check(mask,i) && check(mask, i - 1) && !check(mask, i - 2))
        {
            ull x = mask;
            x = Unset(x, i);
            x = Unset(x, i - 1);
            x = Set(x, i - 2);
            ans = min(ans,Bitmask(x));
        }
    }
    return dp[mask] = ans;
}

int main()
{
    CIN;
    int t,T;
    cin>>T;
    RUN_CASE(t,T)
    {
        ull mask = 0LL;
        string str;
        cin.ignore();
        cin>>str;
        for(int i = 0; i < (int)str.size(); i++)
        {
            if(str[i]=='o')
                mask = Set(mask,i);
        }
        ms(dp,-1);
        cout<<Bitmask(mask)<<endl;
    }
    return 0;
}
