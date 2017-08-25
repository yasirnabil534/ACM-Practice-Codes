#include<stdio.h>
#include<math.h>
#define PI acos(-1)

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double ox,oy,ax,ay,bx,by,oa,ob,ab,angl,S;
        scanf("%lf %lf %lf %lf %lf %lf",&ox,&oy,&ax,&ay,&bx,&by);
        oa = sqrt(pow(ox-ax,2)+pow(oy-ay,2));
        ob = sqrt(pow(ox-bx,2)+pow(oy-by,2));
        ab = sqrt(pow(bx-ax,2)+pow(by-ay,2));
        angl = acos((oa*oa+ob*ob-ab*ab)/(2*oa*ob));
        S = oa*angl;
        printf("Case %d: %lf\n",t,S);
    }
    return 0;
}

