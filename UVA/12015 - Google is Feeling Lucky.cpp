#include<bits/stdc++.h>

using namespace std;

struct Duel
{
    string str;
    int x;
    void input()
    {
        cin>>str>>x;
    }
};

bool cmp(Duel a, Duel b)
{
    //if(a.x==b.x)
        //return lexicographical_compare(a.str.begin(),a.str.end(),b.str.begin(),b.str.end());
    return a.x>b.x;
}

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        Duel p[10];
        for(int i=0;i<10;i++) p[i].input();
        sort(p,p+10,cmp);
        int mx = p[0].x;
        cout<<"Case #"<<t<<":\n";
        for(int i=0;i<10;i++)
        {
            if(p[i].x>=mx)
                cout<<p[i].str<<endl;
            else break;
        }
    }
    return 0;
}
