#include<stdio.h>
#include <math.h>

int main()
{

    float A,B,C,R1,R2,d;
    scanf("%f%f%f",&A,&B,&C);
    d=(pow(B,2)-4*A*C);
    if(A==0)
    {
        printf("Impossivel calcular\n");
    }
    else if(d<0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        R1=-B+pow(d,.5)/(2*A);
        R2=-B-pow(d,.5)/(2*A);
        printf("R1 = %0.5f\nR2 = %0.5f\n",R1,R2);
    }

    return 0;
}
