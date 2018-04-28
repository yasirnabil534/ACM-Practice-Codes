#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll humble[6003];

void make_humble(int i2, int i3, int i5, int i7, int xx)
{
    if(xx>5850) return;
    ll porer_2,porer_3,porer_5,porer_7,porer_hum;
    humble[1]=1;
    porer_2 = humble[i2]*2;
    porer_3 = humble[i3]*3;
    porer_5 = humble[i5]*5;
    porer_7 = humble[i7]*7;
    porer_hum = min(porer_2, min(porer_3, min(porer_5,porer_7)));
    humble[xx] = porer_hum;
    if(porer_2==porer_hum)
        i2++;
    if(porer_3==porer_hum)
        i3++;
    if(porer_5==porer_hum)
        i5++;
    if(porer_7==porer_hum)
        i7++;
    make_humble(i2,i3,i5,i7,xx+1);
}

int main()
{
    make_humble(1,1,1,1,2);
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
