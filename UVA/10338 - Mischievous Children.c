#include<stdio.h>
#include<string.h>

long long int factorial(long long int a)
{
    int i;
    long long int p=1;
    for(i=1;i<=a;i++)
        p=p*i;
    return p;
}

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int ans,i,j,n,p=1;
        int ar[26];
        char ch[20];
        for(i=0;i<26;i++)
            ar[i]=0;
        scanf("%s",ch);
        n=strlen(ch);
        for(i=0;i<n;i++)
            if(ch[i]>='A'&&ch[i]<='Z')
                ar[ch[i]-'A']++;
        for(i=0;i<26;i++)
            p=p*factorial(ar[i]);
        ans = (factorial(n)/p);
        printf("Data set %d: %lld\n",t,ans);
    }
    return 0;
}
