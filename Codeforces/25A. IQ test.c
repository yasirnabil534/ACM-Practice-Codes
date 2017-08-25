#include<stdio.h>

int main()
{
    int i,j,n,odd=0,ev=0,k;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]%2==0)
        {
            ev++;
            j=i+1;
        }
        else
        {
            odd++;
            k=i+1;
        }
    }
    if(odd<ev)
        printf("%d\n",k);
    else
        printf("%d\n",j);
    return 0;
}
