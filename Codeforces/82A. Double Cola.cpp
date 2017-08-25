#include<bits/stdc++.h>

using namespace std;

int main()
{
    char name[][10] = {"None","Sheldon","Leonard","Penny","Rajesh","Howard"};
    int i,j,k,x,m,n;
    cin>>n;
    x = 5;
    m = n;
    k = 1;
    while(m>x)
    {
        m -= x;
        k *= 2;
        x *= 2;
    }
    x = ceil((m*1.0)/(k*1.0));
    cout<<name[x]<<endl;
    return 0;
}
