#include<stdio.h>

int main()
{
    int i,j,ar[3],t,a[4];
    for(i=0;i<3;i++)
    {
        scanf("%d",&ar[i]);
    }
    a[0]=(ar[0]*(ar[1]+ar[2]));
    a[1]=(ar[0]*ar[1]*ar[2]);
    a[2]=((ar[0]+ar[1])*ar[2]);
    a[3]=(ar[0]+ar[1]+ar[2]);
    for(i=0;i<4;i++)
    {
        for(j=i;j<4;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("%d\n",a[0]);
    return 0;
}
