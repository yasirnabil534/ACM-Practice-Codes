#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j;
    string a[16];
    a[0]="Happy";a[1]="birthday";a[2]="to";a[3]="you";a[4]="Happy";a[5]="birthday";a[6]="to";a[7]="you";a[8]="Happy";a[9]="birthday";a[10]="to";a[11]="Rujia";a[12]="Happy";a[13]="birthday";a[14]="to";a[15]="you";
    cin>>n;
    string in[n];
    for(i=0;i<n;i++)
        cin>>in[i];
    j=0;
    i=0;
    int x=0;
    while(1)
    {
        i%=16;
        j%=n;
        cout<<in[j]<<": "<<a[i]<<endl;
        if(i==15&&x>=n) break;
        i++;
        j++;
        x++;
    }
    return 0;
}
