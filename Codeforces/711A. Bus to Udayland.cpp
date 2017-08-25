#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,x=0;
    cin>>n;
    char ch[n][7];
    for(i=0;i<n;i++)
    {
        scanf("%s",ch[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ch[i][0]=='O'&&ch[i][1]=='O')
        {
            ch[i][0] = ch[i][1] = '+';
            x=1;
            break;
        }
        if(ch[i][3]=='O'&&ch[i][4]=='O')
        {
            ch[i][3] = ch[i][4] = '+';
            x=1;
            break;
        }
    }
    if(x==1)
    {
        printf("YES\n");
        for(i=0;i<n;i++)
            printf("%s\n",ch[i]);
    }
    else
        printf("NO\n");
    return 0;
}
