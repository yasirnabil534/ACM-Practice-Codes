#include<stdio.h>
#include<math.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        double R1,R2,R3,a,b,c,A,B,C,area,ans;
        scanf("%lf %lf %lf",&R1,&R2,&R3);
        area = sqrt((R1+R2+R3)*R1*R2*R3);
        a=R1+R3;
        b=R1+R2;
        c=R2+R3;
        A=acos((b*b+c*c-a*a)/(2*b*c));
        B=acos((a*a+c*c-b*b)/(2*c*a));
        C=acos((b*b+a*a-c*c)/(2*b*a));
        ans=(.5*R1*R1*C)+(.5*R2*R2*A)+(.5*R3*R3*B);
        ans=area-ans;
        printf("Case %d: %lf\n",t,ans);
    }
    return 0;
}
