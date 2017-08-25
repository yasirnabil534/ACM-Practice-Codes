#include <stdio.h>

int main() {

    double a,b,c,d,e,f;
    scanf("%lf%lf%lf",&d,&e,&f);
    if(d>e)
    {
        if(f>d)
        {
            a=f;
            b=d;
            c=e;
        }
        else if(d>f)
        {
            if(f>e)
            {
                a=d;
                b=f;
                c=e;
            }
            else if(e>f)
            {
                a=d;
                b=e;
                c=f;
            }
        }
    }
    if(e>d)
    {
        if(f>d)
        {
            a=e;
            b=f;
            c=d;
        }
        else if(d>f)
        {

            a=e;
            b=d;
            c=f;
        }

    }
    if(a>=(b+c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
    if(a*a==(b*b+c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    if(a*a>(b*b+c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    if(a*a<(b*b+c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if(a==b&&a==c&&b==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    if((a==b&&a!=c)||(b==c&&b!=a)||(a==c&&a!=b))
    {
        printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}
