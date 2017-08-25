#include <stdio.h>

int main() {

    int H1,H2,M1,M2,a,i;
    for(i=1;;i++)
    {
        scanf("%d %d %d %d",&H1,&M1,&H2,&M2);
        if(H1==0&&H2==0&&M1==0&&M2==0)
        {
            break;
        }
        else
        {
            if(H2>=H1)
            {
                a=(H2-H1)*60+(M2-M1);
            }
            if(H2==H1&&M2<M1)
            {
                a=(H2-H1+24)*60+(M2-M1);
            }

            if(H2<H1)
            {
                a=((H2-H1+24)*60)+(M2-M1);
            }
        }
        printf("%d\n",a);
    }

    return 0;
}
