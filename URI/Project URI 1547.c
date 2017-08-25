#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,test;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        int st,n;
        scanf("%d %d",&st,&n);
        int s[st],ok=1000,i,p;
        for(i=0;i<st;i++)
        {
            scanf("%d",&s[i]);
            if(abs(n-s[i])<ok)
            {
                ok=abs(n-s[i]);
                p=i+1;
            }
        }
        printf("%d\n",p);
    }
    return 0;
}
