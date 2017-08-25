#include<stdio.h>
#include<stdlib.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int r1,c1,r2,c2;
        scanf("%d %d %d %d",&r1,&c1,&r2,&c2);
        if((r1+c1)%2!=(r2+c2)%2)
            printf("Case %d: impossible\n",t);
        else
        {
            if(abs(r2-r1)==abs(c2-c1))
                printf("Case %d: 1\n",t);
            else
                printf("Case %d: 2\n",t);
        }
    }
    return 0;
}
