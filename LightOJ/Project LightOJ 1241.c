#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,i,x=0,lie;
        scanf("%d",&n);
        int ar[n];
        for(i=0;i<n;i++)
            scanf("%d",&ar[i]);
        if(ar[0]>2)
            x+=(ar[0]+2)/5;
        for(i=1;i<n;i++)
        {
            if(ar[i]>ar[i-1])
            {
                lie=ar[i]-ar[i-1];
                if(lie<=5)
                    x++;
                else if(lie%5==0)
                {
                    x+=(ar[i]-ar[i-1])/5;
                }
                else if(lie%5>0)
                {
                    x+=lie/5;
                    x++;
                }
            }
        }
        printf("Case %d: %d\n",t,x);
    }
    return 0;
}
