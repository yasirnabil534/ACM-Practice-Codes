#include<stdio.h>

int main()
{
    long long int a,x,p,q,i,j,n,z,b,c,d,t;
    scanf("%lld",&t);
    for(d=1;d<=t;d++)
    {
        scanf("%lld %lld",&a,&x);
        int ar[a+1];
        for(c=1; c<=a; c++)
            ar[c]=1;
        ar[x]=0;
        printf("%d\n",x);
        //x--;
        b=x;
        q=1;
        n=0;
        for(i=b,p=b;; i+=x)
        {
            if(i>a)
                i%=a;
            for(j=i;;)
            {
                p++;
                if(p>a)
                    p%=a;
                if(ar[p]!=0)
                    j++;
                //if(j>a)
                    //j%=a;
                if(j==x+i)
                {
                    ar[p]=0;
                    q++;
                    n=p;
                    printf("%lld\n",p);
                    break;
                }
                if(q==a)
                    break;
            }
            if(q==a)
                break;
        }
        printf("Case %lld: %lld\n",d,n);
    }
    return 0;
}
