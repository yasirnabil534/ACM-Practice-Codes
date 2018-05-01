#include<bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}

int power(int n)
{
    int num = 1;
    for(int i = 1; i <= n; i++)
    {
        num*=2;
    }
    return num;
}

int main()
{
    int t,T;
    scanf("%d",&T);
    for(int t = 1; t <= T; t++)
    {
        char s1[35],s2[35];
        scanf(" %s %s",s1,s2);
        int n = strlen(s1);
        int m = strlen(s2);
        int num1=0, num2=0;
        bool fg = true;
        for(int i = n - 1, j = 0; i >= 0; i--, j++)
        {
            if(s1[i]=='1') num1+=power(j);
        }
        for(int i = m - 1, j = 0; i >= 0; i--, j++)
        {
            if(s2[i]=='1') num2+=power(j);
        }
        if(GCD(num1,num2)==1)
            fg = false;
        printf("Pair #%d: ",t);
        if(fg)
            printf("All you need is love!\n");
        else printf("Love is not all you need!\n");
    }
    return 0;
}
