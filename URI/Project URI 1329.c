#include <stdio.h>

int main() {

    int i,n,m,a,b,j;
    for(j=0;;j++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            a=0;
            b=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&m);
                if(m==0)
                {
                    a++;
                }
                else if(m==1)
                {
                    b++;
                }
            }
            printf("Mary won %d times and John won %d times\n",a,b);
        }
    }
    return 0;
}
