#include <stdio.h>

 long long int power(long long int a)
 {
     long long int p=1,i;
     for(i=1;i<=a;i++)
     {
         p*=3;
     }
     return p;
 }

long long int main() {

    long long int a, b;
    while(1)
    {
        scanf("%lld",&a);
        if(a>=0&&a<=20)
            break;
    }
    b=power(a);
    printf("%lld\n",b);

    return 0;
}
