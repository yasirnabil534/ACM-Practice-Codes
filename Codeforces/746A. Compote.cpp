#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    b/=2;c/=4;
    printf("%d\n",min(min(a,b),c)*7);
    return 0;
}
