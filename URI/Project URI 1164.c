#include <stdio.h>

int main() {

    int c,n,i,j,s;
    scanf("%d",&c);
    for(j=1;j<=c;j++)
    {
        s=0;
        scanf("%d",&n);
        for(i=1;i<n;i++)
        {
            if(n%i==0)
            {
                s+=i;
            }
        }
        if(n%s==0&&s>1)
        {
            printf("%d eh perfeito\n",n);
        }
        else
        {
            printf("%d nao eh perfeito\n",n);
        }
    }

    return 0;
}
