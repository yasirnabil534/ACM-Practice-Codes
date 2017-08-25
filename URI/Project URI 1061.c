#include <stdio.h>

int main()
{
    int w,x,y,z,w1,x1,y1,z1,w2,x2,y2,z2,d=0,h=0,m=0,s=0,e;
    char d1[5],n[5];
    char c1,c2,c3,c4;
    scanf("%s %d",&d1,&w1);
    scanf(" %d %c %d %c %d",&x1,&c1,&y1,&c2,&z1);
    scanf(" %s %d",&n,&w2);
    scanf(" %d %c %d %c %d",&x2,&c3,&y2,&c4,&z2);
    e=z2-z1;
    if(e>=0)
    {
        z=e;
    }
    else if(e<0)
    {
        z=e+60;
        m--;
    }
    e=y2-y1;
    if(e>=0)
    {
        y=e+m;
    }
    else if(e<0)
    {
        y=e+60+m;
        h--;
    }
    e=x2-x1;
    if(e>=0)
    {
        x=e+h;
    }
    else if(e<0)
    {
        x=e+h+24;
        d--;
    }
    e=w2-w1;
    w=e+d;
    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",w,x,y,z);
    return 0;
}
