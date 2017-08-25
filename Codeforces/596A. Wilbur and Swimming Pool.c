#include<stdio.h>

int main()
{
    int i,j,n,a=0,b=0,c,d,e,f,t,res;
    scanf("%d",&n);
    int ar[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
            scanf("%d",&ar[i][j]);
    }
    if(n<2)
        printf("-1\n");
    else
    {
        if(n==2)
        {
            if(ar[0][0]==ar[1][0]||ar[1][0]==ar[1][1])
                printf("-1\n");
            else
                res=(ar[1][0]-ar[0][0])*(ar[1][1]-ar[0][1]);
        }
        else if(n==3)
        {
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                {
                    if(ar[i][0]>ar[j][0])
                    {
                        t=ar[i][0];
                        ar[i][0]=ar[j][0];
                        ar[j][0]=t;
                        t=ar[i][1];
                        ar[i][1]=ar[j][1];
                        ar[j][1]=t;
                    }
                }
            }
            for(i=0;i<i;i++)
            {
                for()
            }
        }

    }
}
