#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n;
        scanf("%d",&n);
        int cnt = 0,surviver,number = n;
        while(1)
        {
            int tmp = 0,num = number;
            while(num>0)
            {
                num>>=1;
                tmp++;
            }
            int off = (1<<(tmp-1));
            off = number - off;
            surviver = (2*off)+1;
//            cout<<surviver<<' '<<number<<endl;
            if(surviver==number)
                break;
            cnt++;
            number = surviver;
        }
        printf("Case %d: %d %d\n",t,cnt,surviver);
    }
}
