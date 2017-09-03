#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,x;
    while(1)
    {
        cin>>m>>x;
        if(!(m||x)) break;
        long long int v;
        if(x>0&&x<100)
        {
            v = (((m-1)*100)/(100-x));
            if((((m-1)*100)%(100-x))==0) v--;
        }
        if(v>=m&&x>0&&x<100)
            cout<<v<<endl;
        else
            cout<<"Not found\n";
    }
    return 0;
}
