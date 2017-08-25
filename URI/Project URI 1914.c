#include<stdio.h>
#include<string.h>

int main()
{
    long long int t,i,a,b,n;
    char p1[101],p2[101],c1[6],c2[6];
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%s %s %s %s %lld %lld",p1,c1,p2,c2,&a,&b);
        if((a+b)%2==0)
        {
            if((strcmp(c1,"PAR"))==0)
                printf("%s\n",p1);
            else if((strcmp(c2,"PAR"))==0)
                printf("%s\n",p2);
        }
        else if((a+b)%2!=0)
        {
            if((strcmp(c1,"IMPAR"))==0)
                printf("%s\n",p1);
            else if((strcmp(c2,"IMPAR"))==0)
                printf("%s\n",p2);
        }
    }
    return 0;
}
