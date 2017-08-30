#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,R;
    int t;
    for(t=1;;t++)
    {
        cin>>N>>R;
        if(N==0&&R==0) break;
        int dep,div;
        dep = N-R;
        div = ceil((dep*1.0)/R);
        if(div<=0) div=0;
        printf("Case %d: ",t);
        if(div>26) printf("impossible\n");
        else
            printf("%d\n",div);
    }
    return 0;
}
