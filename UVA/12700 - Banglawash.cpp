#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>

int main()
{
    int T,t;
    scanf("%d",&T);
    for(t=1; t<=T; t++)
    {
        int i,j,n,a=0,b=0,w=0;
        scanf("%d",&n);
        char ch;
        for(i=0; i<n; i++)
        {
            scanf(" %c",&ch);
            switch(ch)
            {
            case 'B':
                b++;
                break;
            case 'W':
                w++;
                break;
            case 'T':
                a++;
                break;
            }
        }
        if(b>w&&w==0&&a==0)
            printf("Case %d: BANGLAWASH",t);
        else if(w>b&&b==0&&a==0)
            printf("Case %d: WHITEWASH",t);
        else if(b>w)
            printf("Case %d: BANGLADESH %d - %d",t,b,w);
        else if(w>b)
            printf("Case %d: WWW %d - %d",t,w,b);
        else if(w==b&&(w!=0||a!=0))
            printf("Case %d: DRAW %d %d",t,b,a);
        else
            printf("Case %d: ABANDONED",t);
        printf("\n");
    }
    return 0;
}
