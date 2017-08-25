#include<stdio.h>

int main()
{
    int a,b,x,y;
    scanf("%d %d",&x,&y);
    b=x-y;
    if((y>=0&&y<3))
        printf("nova\n");
    else if((y>=3&&y<=96)&&b<=0)
        printf("crescente\n");
    else if((y>=3&&y<=96)&&b>0)
        printf("minguante\n");
    else if(y>=97&&y<=100)
        printf("cheia\n");
    return 0;
}
