#include <stdio.h>

int main() {

    double age,av=0,i;
    for(i=0;;i++)
    {
        scanf("%lf",&age);
        if(age<0)
        {
            break;
        }
        else if(age>=0)
        {
            av+=age;
        }
    }
    printf("%0.2lf\n",av/i);

    return 0;
}
