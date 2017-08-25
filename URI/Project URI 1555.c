#include <stdio.h>

int r(int x,int y)
{
    int z;
    z=(3*x*3*x)+(y*y);
    return z;
}

int b(int x,int y)
{
    int z;
    z=(2*x*x)+(5*y*5*y);
    return z;
}

int c(int x,int y)
{
    int z;
    z=(-100*x)+(y*y*y);
    return z;
}

int main() {

    int i,j,k,d,e,f,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&j,&k);
        d=r(j,k);
        e=b(j,k);
        f=c(j,k);
        if(d>e&&d>f)
        {
            printf("Rafael ganhou\n");
        }
        if(e>d&&e>f)
        {
            printf("Beto ganhou\n");
        }
        if(f>e&&f>d)
        {
            printf("Carlos ganhou\n");
        }
    }
    return 0;
}
