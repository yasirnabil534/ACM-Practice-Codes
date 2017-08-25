#include<stdio.h>

int main()
{
    int c1,c2,c3,c4,c5,b;
    scanf("%d %d %d %d %d",&c1,&c2,&c3,&c4,&c5);
    if(((c1+c2+c3+c4+c5)%5==0)&&(c1+c2+c3+c4+c5)>0)
        b=(c1+c2+c3+c4+c5)/5;
    else
        b=-1;
    printf("%d\n",b);
    return 0;
}
