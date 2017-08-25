#include<stdio.h>

int main()
{
    int i,j,k,n,t,p,sum=0,v,m,x;
    scanf("%d",&n);
    for(t=1; t<=n; t++)
    {
        int a[9][9],c[9][3];
        for(i=0;i<9;i++)
        {
            for(j=0;j<3;j++)
            {
                c[i][j]=0;
            }
        }
        p=0;
        for(i=0; i<9; i++)
        {
            for(j=0; j<9; j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0; i<9; i++)
        {
            for(j=0; j<8; j++)
            {
                if(a[i][j]!=a[i][j+1])
                {
                    c[i][0]++;
                }
            }
        }
        for(i=0; i<8; i++)
        {
            for(j=0; j<9; j++)
            {
                if(a[i][j]!=a[i+1][j])
                {
                    c[i][1]++;
                }
            }
        }
        for(x=2; x<9; x+=3)
        {
            for(m=2; m<9; m+=3)
            {
                for(i=x-2; i<x; i++)
                {
                    for(j=m-2; j<m-1; j++)
                    {
                        if(a[i][j]!=a[i][j+1])
                        {
                            c[p][2]++;
                        }
                    }
                }
                p++;
            }
        }
        for(i=0;i<9;i++)
        {
            printf("i=%d\ti,0=%d\ti,1=%d\ti,2=%d\n",i,c[i][0],c[i][2],c[i][2]);
            if(c[i][0]!=8||c[i][1]!=8||c[i][2]!=9)
                sum=1;
        }
        printf("Instancia %d\n",t);
        if(sum==0)
            printf("SIM\n\n");
        else
            printf("NAO\n\n");
    }
    return 0;
}
