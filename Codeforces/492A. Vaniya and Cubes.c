#include<stdio.h>

int main()
{
    int i,n,p=0,res=0,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res+=i;
        k+=res;
        if(k>n)
            break;
        p=i;
    }
    printf("%d\n",p);
    return 0;
}
