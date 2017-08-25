#include<stdio.h>
#include<math.h>

int main()
{
    int t,test;
    scanf("%d",&test);
    for(t=1;t<=test;t++)
    {
        int n,check=0,i;
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        double sum=0,prcnt,avg;
        for(i=0;i<n;i++)
            sum+=ar[i];
        avg=sum/n;
        for(i=0;i<n;i++)
        {
            if(ar[i]>avg)
                check++;
        }
        prcnt=check*100.0/n;
        printf("%.3lf%%\n",prcnt);
    }
    return 0;
}

