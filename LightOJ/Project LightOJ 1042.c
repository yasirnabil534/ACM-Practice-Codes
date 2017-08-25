#include<stdio.h>
#include<string.h>
#include<math.h>

long long int onroy(long long int p,char ch[])
{
    long long int i=0,j=0,n;
    char c;
    while(p!=0)
    {
        n=p%2;
        ch[i]=n+'0';
        p=p/2;
        i++;
    }
    ch[i]='0';
    for(j=0;j<=i;j++)
    {
        if(ch[j]=='1'&&ch[j+1]=='0')
        {
            c=ch[j+1];
            ch[j+1]=ch[j];
            ch[j]=c;
            break;
        }
    }
    for(n=0;n<j/2;n++)
    {
        c=ch[n];
        ch[n]=ch[j-n-1];
        ch[j-n-1]=c;
    }
    n=0;
    for(j=0;j<=i;j++)
    {
        n += (ch[j]-'0')* pow(2.0,(j*1.0));
    }
    return n;
}

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        long long int n,i,m,p;
        char ch[100];
        scanf("%lld",&n);
        m=onroy(n,ch);
        printf("Case %d: %lld\n",t,m);
    }
    return 0;
}
