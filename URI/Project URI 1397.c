#include <stdio.h>

int main() {

    int i,j,n,m,a,b,z;
    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            m=0;
            z=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d %d",&a,&b);
                if(a>b)
                {
                    m++;
                }
                else if(b>a)
                {
                    z++;
                }
            }
            printf("%d %d\n",m,z);
        }
    }

    return 0;
}
