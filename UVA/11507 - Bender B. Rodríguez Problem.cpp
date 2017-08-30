#include<bits/stdc++.h>

using namespace std;

struct SET
{
    char ch1,ch2;
    SET(){};
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

int main()
{
    int t,T;
    for(t=1;cin>>T;t++)
    {
        if(T==0) break;
        T--;
        SET ar[T],curr('+','x');
        for(int i=0;i<T;i++) cin>>ar[i];
        for(int i=0;i<T;i++)
        {
            if(curr=="+x")
            {
                if(ar[i]=="+y")
                    curr = "+y";
                else if(ar[i]=="-y")
                    curr = "-y";
                else if(ar[i]=="+z")
                    curr = "+z";
                else if(ar[i]=="-z")
                    curr = "-z";
            }
            else if(curr=="-x")
            {
                if(ar[i]=="+y")
                    curr = "-y";
                else if(ar[i]=="-y")
                    curr = "+y";
                else if(ar[i]=="+z")
                    curr = "-z";
                else if(ar[i]=="-z")
                    curr = "+z";
            }
            else if(curr=="+y")
            {
                if(ar[i]=="+y")
                    curr = "-x";
                else if(ar[i]=="-y")
                    curr = "+x";
            }
            else if(curr=="-y")
            {
                if(ar[i]=="+y")
                    curr = "+x";
                else if(ar[i]=="-y")
                    curr = "-x";
            }
            else if(curr=="+z")
            {
                if(ar[i]=="+z")
                    curr = "-x";
                else if(ar[i]=="-z")
                    curr = "+x";
            }
            else if(curr=="-z")
            {
                if(ar[i]=="+z")
                    curr = "+x";
                else if(ar[i]=="-z")
                    curr = "-x";
            }
        }
        cout<<curr<<endl;;
    }
    return 0;
}
