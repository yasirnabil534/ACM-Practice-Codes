#include<bits/stdc++.h>

int main()
{
    double old,neu,per,dif;
    scanf("%lf %lf",&old,&neu);
    dif = neu - old;
    per = (dif*100)/old;
    printf("%.2lf%%\n",per);
    return 0;
}
