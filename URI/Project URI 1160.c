#include<stdio.h>

int main()
{
    long long int pa,pb,i,t,x,ga,gb,c;
    double ra,rb;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        x=0;
        c=0;
        scanf("%lld %lld %lf %lf",&pa,&pb,&ra,&rb);
        while(pa<=pb)
        {
            pa+=(pa*ra/100);
            pb+=(pb*rb/100);;
            x++;
            if(x>100)
            {
                c=1;
                break;
            }
        }
        if(c==0)
            printf("%lld anos.\n",x);
        else if(c==1)
            printf("Mais de 1 seculo.\n");
    }
    return 0;
}
