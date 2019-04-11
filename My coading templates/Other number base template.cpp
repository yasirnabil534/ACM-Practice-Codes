///Other number base template
http://codeforces.com/contest/1144/problem/E

/**
You are given two strings s and t, both consisting of 
exactly k lowercase Latin letters, s is lexicographically
less than t. Your task is to print the median (the middle
element) of this list.
*/

int toTo(char ch) /// Here, 'a' will be replaced with '0'
{
    return (int)(ch-'a');
}

char toto(int x)
{
    return (char)(x +'a');
}

int main()
{
    int n;
    scin(n);
    string str1,str2;
    string ans="";
    cin>>str1>>str2;
    reverse(all(str1));
    reverse(all(str2));
    vi vc;
    int carry = 0;
    int mod = 0;
    for(int i = 0; i < n; i++) /// Change every 26 with the base you want to work with
    {                          /// Line 95 to 105 is to convert base in decimal, just change line 97 efficiently
        int dif = toTo(str2[i]) + toTo(str1[i]) + carry;
        if(dif<26) carry = 0;
        else
        {
            carry = 1;
            dif -= 26;
        }
        vc.pb(dif);
    }
    if(carry==1) vc[n-1]+=26;
    reverse(all(vc));
    vc.pb(0);
    for(int i = 0; i < n; i++)
    {
        carry = vc[i] / 2;
        mod = vc[i]%2;
        vc[i+1] = (mod*26+vc[i+1]);
        vc[i] = carry;
        ans += toto(vc[i]);
    }
    //for(int i = 0; i < n; i++) cout<<vc[i]<< ' ';
    cout<<ans<<endl;
    return 0;
}

/**
Input:
2
az
bf
Output:
bc
**/
