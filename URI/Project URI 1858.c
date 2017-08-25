#include<stdio.h>

int main()
{
    int n,i,p,min=100000;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
         if(ar[i]<min)
         {
             min=ar[i];
             p=i;
         }
    }
    printf("%d\n",p+1);
    return 0;
}
