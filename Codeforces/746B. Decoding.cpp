#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j=1,k,n;
    scanf("%d",&n);
    char ch[n+1],str[n+1];
    scanf("%s",ch);
    k = n/2;
    if(n%2==0&&n>1) k--;
    str[n] = '\0';
    str[k] = ch[0];
    if(n%2==0)
    {
        for(i=1,j=1;j<n;i++)
        {
            if(j<n)
                str[k+i] = ch[j++];
            if(j<n)
                str[k-i] = ch[j++];
        }
    }
    if(n%2!=0)
    {
        for(i=1,j=1;j<n;i++)
        {
            if(j<n)
                str[k-i] = ch[j++];
            if(j<n)
                str[k+i] = ch[j++];
        }
    }
    printf("%s\n",str);
    return 0;
}
