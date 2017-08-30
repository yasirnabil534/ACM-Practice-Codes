#include<stdio.h>

int main()
{
    long long int n,i,j,p,q,max,x,y;
    while(scanf("%lld %lld",&x,&y)!=EOF)
    {
        max=0;
        if(x>=y)
        {
            q=x;
            p=y;
        }
        else
        {
            p=x;
            q=y;
        }
        for(i=p,j=0; i<=q; i++)
        {
            j=i;
            n=1;
            while(j>1)
            {
                if(j%2!=0)
                {
                    j=((3*j)+1);
                }
                else if(j%2==0)
                {
                    j=j/2;
                }

                n++;
            }
            if(n>max)
                max=n;
        }
        printf("%lld %lld %lld\n",x,y,max);
    }
    return 0;
}
