#include<iostream>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1; t<=T; t++)
    {
        long long int a,b;
        cin>>a>>b;
        if(a>b)
            cout<<">"<<endl;
        else if(a==b)
            cout<<"="<<endl;
        else
            cout<<"<"<<endl;
    }
    return 0;
}
