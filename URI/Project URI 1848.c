#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,x,n,bn[4];
    double sum,q;
    char c[100];
    for(i=1;i<=3;i++)
    {
        n=0;
        for(j=1;;j++)
        {
            sum=0;
            gets(c);
            if(strcmp(c,"caw caw")==0)
            {
                printf("%d\n",n);
                break;
            }
            for(x=0;x<3;x++)
            {
                if(c[x]=='*')
                    bn[x]=1;
                else if(c[x]=='-')
                    bn[x]=0;
                sum=sum+(bn[x]*pow(2,2.0-x));
            }
            n+=sum;
        }

    }
    return 0;
}
