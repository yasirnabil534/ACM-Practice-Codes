
#include <stdio.h>

int main() {

    int i,h,m,a=0,p[100];
    double n,b,x;
    double j[10000];
    for(i=0;;i++)
    {
        scanf("%lf",&n);
        if(n<0||n>10)
        {
            printf("nota invalida\n");
        }
        else
        {
            j[i]=n;
            p[a]=i;
            a++;
        }
        if(a==2){
                b=(j[p[0]]+j[p[1]])/2.0;
                printf("media = %0.2lf\n",b);
                printf("novo calculo (1-sim 2-nao)\n");
                break;
            }
    }

    for(h=0;;h++)
    {
        scanf("%d",&m);
        if(m<1||m>2)
        {
            printf("novo calculo (1-sim 2-nao)\n");
        }
        if(m==1){
        a=0;
        for(i=0;;i++){
        scanf("%lf",&x);
        if(x>=0&&x<=10)
        {
            j[i]=x;
            p[a]=i;
            a++;
        }
        else
        {
            printf("nota invalida\n");
        }
        if(a==2)
        {
            b=(j[p[0]]+j[p[1]])/2.0;
            printf("media = %0.2lf\n",b);
            printf("novo calculo (1-sim 2-nao)\n");
            break;
        }
        }}
        if(m==2)
            break;

    }

    return 0;
}
