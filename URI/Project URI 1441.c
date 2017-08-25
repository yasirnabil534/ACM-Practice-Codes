#include<stdio.h>

int main()
{
    int i,n,max;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)
            break;
        max=n;
        i=n;
        while(1)
        {
            if(n==1)
            {
                max=1;
                break;
            }
            if(i%2==0)
            {
                i/=2;
            }
            else if(i%2!=0)
            {
                i=(i*3)+1;
            }
            if(i>max)
                max=i;
            if(i==1)
                break;
        }
        printf("%d\n",max);
    }
    return 0;
}
