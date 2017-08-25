#include<stdio.h>

int main()
{
    int i,j,p,n,ar[4],k;
    scanf("%d",&n);
    n++;
    while(1)
    {
        p=n;
        j=0;
        for(i=3;i>=0;i--)
        {
            ar[i]=p%10;
            p/=10;
        }
        for(k=0;k<3;k++)
            for(i=k+1;i<4;i++)
            {
                if(ar[i]==ar[k])
                    j=1;
            }
        if(j==0)
            break;
        n++;
    }
    printf("%d\n",n);
    return 0;
}
