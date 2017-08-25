#include <stdio.h>

int main() {

    double S=0,i,j;
    for(i=1,j=1;i<=39;i+=2,j*=2)
    {
        S+=i/j;
    }
    printf("%0.2lf\n",S);

    return 0;
}
