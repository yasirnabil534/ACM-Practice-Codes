#include<stdio.h>
#include<math.h>

int main()
{
    int sum,a,i,temp;
    double b;
    while((scanf("%d",&sum))!=EOF)
    {
        temp=0;
        if(sum==0)
            temp=1;
        for(i=1;i<=sqrt(sum);i++)
        {
            b=sqrt((double)sum-(i*i));
            a=b;
            //printf("a=%d,b=%lg\n",a,b);
            if(a==b)
            {
                temp=1;
                break;
            }
        }
        if(temp==1)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
