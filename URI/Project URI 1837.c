#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,q,r;
    while(scanf("%d %d",&a,&b)!=EOF)
    {
        r=a%b;
        q=a/b;
        if(q<0&&r<0&&r<abs(b))
        {
            --q;
            r=-(b*q-a);
            printf("%d %d\n",q,r);
        }
        else if(q>0&&r<0&&r<abs(b))
        {
            ++q;
            r=-(b*q-a);
            printf("%d %d\n",q,r);
        }
        else if(q==0&&r<0&&r<abs(b))
        {
            if(a<0&&b>0)
            {
                --q;
                r=-(b*q-a);
                printf("%d %d\n",q,r);
            }
            else
            {
                ++q;
                r=-(b*q-a);
                printf("%d %d\n",q,r);
            }
        }
        else if(r<abs(b))
            printf("%d %d\n",q,r);
    }
    return 0;
}
