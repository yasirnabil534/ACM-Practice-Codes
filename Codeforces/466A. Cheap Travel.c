#include<stdio.h>

int main()
{
    int i,a,b,n,j,m,sum1,sum2,sum3,count;
    scanf("%d %d %d %d",&n,&m,&a,&b);
    sum1=(n*a);  //total(tk)=10
    sum2=0;
    if(m>=n&&b<=(n*a))
    {
        sum2=b;
    }
    else
    {
        i=0;
        for(j=m;; j+=m)
        {
            //j(trip)= 2 4 6
            i=i+b;           //i(tk)= 3 6 9
            if(j>n)       //sum2(tk)= 3 6 -
            {
                //count(trip)= 2 4 -
                break;
            }
            sum2=i;
            count=j;
        }
        while(count<n)
        {
            if(a<b)
            {
                sum2+=a;
                count++;
            }
            else
            {
                sum2+=b;
                count+=m;
            }
        }
    }
    if(sum2<sum1&&sum2!=0)
        printf("%d\n",sum2);
    else
        printf("%d\n",sum1);
    return 0;
}
