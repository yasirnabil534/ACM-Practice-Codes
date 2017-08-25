#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i,j;
    if(n%2==0||n==1)
        return 0;
    else
    {
        for(i=3;i<=sqrt(n);i+=2)
        {
            if(n%i==0)
                return 0;
        }
    }
    return 1;
}

int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=4;i<(n/2)+1;i++)
    {
        j=n-i;
        if(prime(i)==0&&prime(j)==0)
            break;
    }
    printf("%d %d\n",i,j);
    return 0;
}
