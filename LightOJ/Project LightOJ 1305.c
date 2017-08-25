#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double ax,bx,cx,dx,ay,by,cy,dy,v;
        scanf("%lf %lf %lf %lf %lf %lf",&ax,&ay,&bx,&by,&cx,&cy);
        dx = cx - (bx - ax);
        dy = (cy - by) + ay;
        v = abs(((ax*(by-cy))-(ay*(bx-cx))+((bx*cy-by*cx)))*1);
        printf("Case %d: %.0lf %.0lf %.0lf\n",t,dx,dy,v);
    }
    return 0;
}
