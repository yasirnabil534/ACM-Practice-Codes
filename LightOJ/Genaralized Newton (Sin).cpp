#include<iostream>
#include<cmath>

using namespace std;

double a,b,c,d,e,f,x1,x2;

double fx(double x)
{
    double ans;
    ans = a*pow(x,5.0)+b*pow(x,4.0)+c*pow(x,3.0)+d*pow(x,2.0)+e*x+f;
    return ans;
}

double fpx(double x)
{
    double ans;
    ans = 5.0*a*pow(x,4.0)+4.0*b*pow(x,3.0)+3.0*c*pow(x,2.0)+2.0*d*x+e;
    return ans;
}

double fppx(double x)
{
    double ans;
    ans = 5.0*4.0*a*pow(x,3.0)+4.0*3.0*b*pow(x,2.0)+3.0*2.0*c*x+2.0*d;
    return ans;
}

int main()
{
    int check;
    double x,y,z,ans,p=2.0;
    cout<<"Input a,b,c,d,e,f,x1 for ax^5+bx^4+cx^3+dx^2+ex+f=0\n";
    cin>>a>>b>>c>>d>>e>>f>>x1;
    while(1)
    {
        x = x1-(p*fx(x1))/fpx(x1);
        y = x1-((p-1)*fpx(x1))/fppx(x1);
        cout<<"x = "<<x<<" y = "<<y<<endl;
        z = (fx(x)>fx(y))?x:y;
        cout<<"z = "<<z<<endl;
        ans = fx(z);
        cout<<"ans = "<<ans<<endl;
        check = fabs(x1-z)*10000;
        if(check==0)
            break;
        x1 = z;
    }
    cout<<"The root is x = "<<x<<" correct to four decimal places.\n";
    return 0;
}

