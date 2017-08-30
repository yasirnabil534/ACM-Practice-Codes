#include<iostream>
#include<cstdio>
#include<cmath>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int i,j,k,a,f;
        getchar();
        getchar();
        scanf("%d %d",&a,&f);
        if(t!=1)
            printf("\n");
        for(k=1;k<=f;k++)
        {
            if(k!=1)
                printf("\n");
            for(i=1;i<=a;i++)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
            for(i=a-1;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                    printf("%d",i);
                printf("\n");
            }
        }

    }
    return 0;
}
