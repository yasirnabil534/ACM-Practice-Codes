#include<stdio.h>

int main()
{
    int i,j,m,n;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++)
    {
        if(i%2!=0)
        {
            for(j=1;j<=n;j++)
            {
                if(j<n)
                    printf("#");
                else if(j==n)
                    printf("#\n");
            }
        }
        else if(i%2==0)
        {
            if(i%4==2)
            {
                for(j=1;j<=n;j++)
                {
                    if(j<n)
                        printf(".");
                    else if(j==n)
                        printf("#\n");
                }
            }
            else if(i%4==0)
            {
                for(j=1;j<=n;j++)
                {
                    if(j==1)
                        printf("#");
                    else if(j>1&&j<n)
                        printf(".");
                    else if(j==n)
                        printf(".\n");
                }
            }
        }
    }
    return 0;
}
