#include<bits/stdc++.h>

using namespace std;

int loveCalc(int n)
{
    int p = n,s = 0;
    while(p!=0)
    {
        s+=(p%10);
        p/=10;
    }
    if(s>=0&&s<=9) return s;
    else return loveCalc(s);
}

int main()
{
    string nm1,nm2;
    while(getline(cin,nm1),getline(cin,nm2))
    {
        int n1 = nm1.length();
        int n2 = nm2.length();
        int s1=0, s2=0, a, b, i;
        for(i=0;i<n1;i++)
        {
            if(nm1[i]>='a'&&nm1[i]<='z')
                s1+=(nm1[i]-'a'+1);
            else if(nm1[i]>='A'&&nm1[i]<='Z')
                s1+=(nm1[i]-'A'+1);
        }
        s1 = loveCalc(s1);
        for(i=0;i<n2;i++)
        {
            if(nm2[i]>='a'&&nm2[i]<='z')
                s2+=(nm2[i]-'a'+1);
            else if(nm2[i]>='A'&&nm2[i]<='Z')
                s2+=(nm2[i]-'A'+1);
        }
        s2 = loveCalc(s2);
        a = min(s1,s2);
        b = max(s1,s2);
        if(s1==s2) a=b=s1;
        double ans = (a*100.0)/(b*1.0);
        cout.precision(2);
        cout<<fixed;
        cout<<ans<<" %\n";
    }
    return 0;
}
