#include<stdio.h>

int main()
{
    int coin,i,j,p,sum=0,k=0,t=0;
    scanf("%d",&coin);
    int ar[coin];
    for(i=0; i<coin; i++)
    {
        scanf("%d",&ar[i]);
        sum+=ar[i];
    }
    sum/=2;
    for(i=0; i<coin; i++)
        for(j=i; j<coin; j++)
        {
            if(ar[j]>ar[i])
            {
                p=ar[j];
                ar[j]=ar[i];
                ar[i]=p;
            }
        }
    for(i=0;i<coin;i++)
    {
        if(k>sum)
            break;
        if(k<=sum)
        {
            k+=ar[i];
            t++;
            //printf("ar[%d]=%d--t=%d\n",i,ar[i],t);
        }
    }
    printf("%d\n",t);
    return 0;
}
