#include<iostream>
#include<cstdio>
#include<cmath>

int main()
{
    unsigned long long int a,k,i,l,p=0;
    for(i=0;; i++)
    {
        if(p!=0)
            printf("\n");
        p=1;
        if((scanf("%llu",&a)==EOF))
            break;
        else
        {
            k=0;
            l=0;
            if((a%4==0&&a%100!=0)||(a%400==0))
            {
                k=1;
                l=1;
                printf("This is leap year.\n");
            }
            if(a%15==0)
            {
                k=1;
                printf("This is huluculu festival year.\n");
            }
            if(a%55==0&&l==1)
            {
                k=1;
                printf("This is bulukulu festival year.\n");
            }
            if(k==0)
                printf("This is an ordinary year.\n");
        }
    }
    return 0;
}
