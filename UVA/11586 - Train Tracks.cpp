#include<bits/stdc++.h>

using namespace std;

struct SET
{
    char ch1,ch2;
    SET(){}
    SET(char c, char d)
    {
        ch1 = c;
        ch2 = d;
    }
    bool operator==(string st)
    {
        if(st[0]==ch1&&st[1]==ch2)
            return 1;
        return 0;
    }
    bool operator!=(string st)
    {
        if(st[0]!=ch1||st[1]!=ch2)
            return 1;
        return 0;
    }
    bool operator==(SET st)
    {
        if(st.ch1==ch1&&st.ch2==ch2)
            return 1;
        return 0;
    }
    void operator=(string st)
    {
        ch1 = st[0];
        ch2 = st[1];
    }
    bool operator<(SET s)
    {
        if(ch1==s.ch1){
            if(ch2<s.ch2)
                return 1;
            return 0;
        }
        else if(ch1<s.ch1)
            return 1;
        return 0;
    }
};

istream& operator>>(istream &input, SET &s)
{
    input>>s.ch1>>s.ch2;
    return input;
}

ostream& operator<<(ostream &input, SET &s)
{
    input<<s.ch1<<s.ch2;
    return input;
}

vector <SET> ar;
vector <SET> :: iterator ii;

int main()
{
    int t,T;
    cin>>T;
    getchar();
    for(t=1;t<=T;t++)
    {
        string str,st;
        getline(cin,str);
        stringstream ss(str);
        SET curr;
        while(ss>>st)
        {
            curr = st;
            ar.push_back(curr);
        }
        int mm=0,ff=0;
        for(ii = ar.begin();ii!=ar.end();++ii)
        {
            if(*ii=="MM") mm++;
            if(*ii=="FF") ff++;
        }
        if(mm==ff&&ar.size()>1) cout<<"LOOP\n";
        else cout<<"NO LOOP\n";
        ar.clear();
    }
    return 0;
}
