#include<iostream>

using namespace std;

int main()
{
    long long int S,m,r;
    double n;
    cin>>S;
    m = S%5;
    S = S-m;
    n = log((S-5)/5.0);
    r = 5*n;
    return 0;
}
