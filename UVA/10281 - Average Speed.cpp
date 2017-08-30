#include<bits/stdc++.h>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    string str,str2;
    double ans=0, grand_ans=0, distance=0,prev_time=0, now_time=0,diff=0,x;
    while(getline(cin,str))
    {
        str2 = str;
        for(int i=0;i<str.length();i++)
            if(str[i]<'0'||str[i]>'9')
                str[i] = ' ';
        stringstream ss;
        ss.clear();
        ss<<str;
        int ar[] = {-1,-1,-1,-1};
        int i=0;
        while(ss>>x)
        {
            ar[i++] = x;
        }
        now_time = (ar[0]*3600.0)+(ar[1]*60.0)+ar[2];
        diff = now_time - prev_time;
        ans = (diff/3600.00) * distance;
        if(ar[3]==-1)
        {
            cout<<str2;
            printf(" %.2lf km\n",ans+grand_ans);
        }
        if(ar[3]>=0)
            distance = ar[3];
        prev_time = now_time;
        grand_ans += ans;
    }
    return 0;
}


/**00:00:01 100
00:15:01
00:30:01
01:00:01 50
03:00:01
03:00:05 140*/
