#include <stdio.h>
#include<math.h>

int main() {

    long long int i,j,k,x,y,sum,mul1,mul2;
    for(k=1;scanf("%lld %lld",&x,&y)>0;k++)
    {
        if(x==EOF||y==EOF)
        {
            break;
        }
        else if(x!=EOF&&y!=EOF)
        {
        sum=0;
        mul1=1;
        mul2=1;
        for(i=x;i>1;i--)
        {
            mul1*=i;
        }
        for(j=y;j>1;j--)
        {
            mul2*=j;
        }
        sum=mul1+mul2;
        printf("%lld\n",sum);
        }
    }
    return 0;
}
