#include <stdio.h>

int main() {

    int a=0,g=0,d=0,i,x;
    for(i=1;;i++)
    {
        scanf("%d",&x);
        if(x==4)
        {
            break;
        }
        if(x==1)
        {
            a++;
        }
        if(x==2)
        {
            g++;
        }
        if(x==3)
        {
            d++;
        }
    }
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);

    return 0;
}
