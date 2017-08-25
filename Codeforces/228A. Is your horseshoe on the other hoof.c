#include<stdio.h>

int main()
{
    int i,j,ar[4],c,t;
    for(i=0;i<4;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;;i++)
    {
        t=0;
        for(j=1;j<4-i;j++)
        {
            if(ar[j]<ar[j-1])
            {
                t++;
                c=ar[j];
                ar[j]=ar[j-1];
                ar[j-1]=c;
            }
        }
        if(t==0)
            break;
    }
    c=0;
    for(i=1;i<4;i++)
    {
        if(ar[i]==ar[i-1])
            c++;
    }
    printf("%d\n",c);
    return 0;
}
