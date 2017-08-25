#include<stdio.h>
int main()
{
     long long int a, b, c, d;
     scanf("%lld %lld",&a,&b);
     if(a>b)
     {
         a=c;
         b=d;
     }
     if(b>a)
     {
         a=d;
        b=c;
     }

     if (c%d==0)
        printf("Sao Multiplos\n");
     else
        printf("Nao sao Multiplos\n");
     return 0;
}
