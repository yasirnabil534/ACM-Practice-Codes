#include<bits/stdc++.h>

using namespace std;

int main()
{
    while(1)
    {
        int i,k,x,y,a,b;
        cin>>k;
        if(k==0) break;
        vector <string> ar;
        cin>>x>>y;
        for(i=0;i<k;i++)
        {
            cin>>a>>b;
            a-=x;
            b-=y;
            if(a>0&&b>0) ar.push_back("NE");
            else if(a<0&&b>0) ar.push_back("NO");
            else if(a<0&&b<0) ar.push_back("SO");
            else if(a>0&&b<0) ar.push_back("SE");
            else ar.push_back("divisa");
        }
        vector<string> ::iterator ii;
        for(ii = ar.begin();ii<ar.end();ii++)
            cout<<*ii<<endl;
    }
    return 0;
}
