#include<bits/stdc++.h>

#define PI 3.1415926535897

using namespace std;

int main()
{
    double a,b,c;
    while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
    {
        double p,s,A,R,V,Y,x;
        p = a+b+c;
        s = p/2;
        A = sqrt((s*(s-a)*(s-b)*(s-c)));
        R = 2*(A/p);
        R = R*R*PI;
        V = A-R;
        x = (a*b*c)/sqrt(p*(p-2*a)*(p-2*b)*(p-2*c));
        Y = (PI*x*x)-A;
        printf("%.4f %.4f %.4f\n",Y,V,R);
    }
    return 0;
}
