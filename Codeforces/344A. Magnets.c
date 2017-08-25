#include<stdio.h>

int main()
{
    int i,m=1,n;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
        scanf("%d",&ar[i]);
    for(i=1;i<n;i++)
    {
        if(ar[i-1]!=ar[i])
            m++;
    }
    printf("%d\n",m);
    return 0;
}
