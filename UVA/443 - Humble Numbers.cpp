#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll humble[6003];

void make_humble()
{
    ll porer_2,porer_3,porer_5,porer_7,porer_hum,i2,i3,i5,i7;
    i2=i3=i5=i7=humble[1]=1;
    porer_2 = humble[i2]*2;
    porer_3 = humble[i3]*3;
    porer_5 = humble[i5]*5;
    porer_7 = humble[i7]*7;
    for(int i = 2; i <= 5842; i++)
    {
        porer_hum = min(porer_2,porer_3);
        porer_hum = min(porer_hum,porer_5);
        porer_hum = min(porer_hum,porer_7);
        humble[i] = porer_hum;
        if(porer_hum==porer_2)
        {
            i2++;
            porer_2 = humble[i2]*2;
        }
        if(porer_hum==porer_3)
        {
            i3++;
            porer_3 = humble[i3]*3;
        }
        if(porer_hum==porer_5)
        {
            i5++;
            porer_5 = humble[i5]*5;
        }
        if(porer_hum==porer_7)
        {
            i7++;
            porer_7 = humble[i7]*7;
        }
    }
}

int main()
{
    make_humble();
    ll n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        printf("The %lld",n);
        if(n%10==1&&n%100!=11) printf("st ");
        else if(n%10==2&&n%100!=12) printf("nd ");
        else if(n%10==3&&n%100!=13) printf("rd ");
        else printf("th ");
        printf("humble number is %lld.\n",humble[n]);
    }
    return 0;
}
