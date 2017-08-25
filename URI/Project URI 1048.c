#include <stdio.h>

int main() {

    float x,y;
    scanf("%f",&x);
    if(x>=0&&x<=2000)
    {
        printf("Isento\n");
    }
    else if(x>=2000.01&&x<=3000)
    {
        y=x-2000*.08;
        printf("R$ %0.2f\n",y);
    }
    else if(x>=3000.01&&x<=4500)
    {
        y=(x-3000)*.18+1000*.08;
        printf("R$ %0.2f\n",y);
    }
    else if(x>4500)
    {
        y=(x-4500)*.28+1500*.18+1000*.08;
        printf("R$ %0.2f\n",y);
    }

    return 0;
}
