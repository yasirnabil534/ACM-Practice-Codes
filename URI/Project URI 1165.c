#include <stdio.h>

int main() {

    int c,n,i,k,a;
    scanf("%d",&c);
    for(k=1;k<=c;k++)
    {
        scanf("%d",&n);
        a=0;
        if(n==1)
        {
            a++;
        }
        else if(n==2)
        {
            a=0;
        }
        else if(n>2)
        {
            for(i=2;i<n;i++)
            {
                if(n%i==0)
                {
                    a++;
                }
            }
        }
        if(a==0)
        {
            printf("%d eh primo\n",n);
        }
        else if(a!=0)
        {
            printf("%d nao eh primo\n",n);
        }
    }

    return 0;
}
