#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c,d,p,q,r,s,x;
    cin>>a>>b>>c>>d;
    if(a==c)
    {
        if(b<d)
        {
            x = abs(b-d);
            p = x+a;
            q = b;
            r = x+a;
            s = x+b;
        }
        else
        {
            x = abs(b-d);
            p = x+c;
            q = d;
            r = x+c;
            s = x+d;
        }
        cout<<p<<' '<<q<<' '<<r<<' '<<s<<endl;
    }
    else if(b==d)
    {
        if(a<c)
        {
            x = abs(a-c);
            p = a;
            q = b+x;
            r = x+a;
            s = x+b;
        }
        else
        {
            x = abs(a-c);
            p = c;
            q = d+x;
            r = x+c;
            s = x+d;
        }
        cout<<p<<' '<<q<<' '<<r<<' '<<s<<endl;
    }
    else if(abs(a-c)==abs(b-d))
    {
        if(b<d)
        {
            x = abs(a-c);
            p = a;
            q = b+x;
            r = c;
            s = d-x;
        }
        else
        {
            x = abs(a-c);
            p = a;
            q = b-x;
            r = c;
            s = d+x;
        }
        cout<<p<<' '<<q<<' '<<r<<' '<<s<<endl;
    }
    else
        cout<<"-1\n";
    return 0;
}
