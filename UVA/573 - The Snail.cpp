#include<bits/stdc++.h>

using namespace std;

int main()
{
    //freopen("input.txt","r",stdin);
    double h,u,d,f;
    while(1)
    {
        cin>>h;
        if(h==0) break;
        cin>>u>>d>>f;
        double day=0, inhgt=0, dis , hgt, nhgt=0, i=0, ps = (u*f)/100.0;
        //cout<<"day\tinitial hight\tdis clmb\taft clmb\taft sld\n";
        do
        {
            day++;
            inhgt = hgt = nhgt;
            dis = u - (ps*i);
            if(dis<0) dis=0;
            hgt = dis+inhgt;
            nhgt = hgt-d;
            //printf("%.2f\t\t%.2f\t\t%.2f\t\t%.2f\t\t%.2f\n",day,inhgt,dis,hgt,nhgt);
            //hgt = nhgt;
            i++;
        }while((hgt<=h&&hgt>=0)&&nhgt>=0);
        if(hgt>h) cout<<"success on day "<<day<<'\n';
        else if(hgt<0||nhgt<0) cout<<"failure on day "<<day<<'\n';
    }
    return 0;
}
