#include<bits/stdc++.h>

using namespace std;

long long int ugly[1502];

void Ugly()
{
    long long int i,j,i2,i3,i5,next_ugly=1;
    i2 = i3 = i5 = 1;
    ugly[1] = 1;
    long long int next_2 = ugly[i2]*2;
    long long int next_3 = ugly[i3]*3;
    long long int next_5 = ugly[i5]*5;
    for(i=2;i<=1500;i++)
    {
        next_ugly = min(next_2,next_3);
        next_ugly = min(next_5,next_ugly);
        ugly[i] = next_ugly;
        if(next_ugly==next_2)
        {
            i2++;
            next_2 = ugly[i2]*2;
        }
        if(next_ugly==next_3)
        {
            i3++;
            next_3 = ugly[i3]*3;
        }
        if(next_ugly==next_5)
        {
            i5++;
            next_5 = ugly[i5]*5;
        }
    }
}

int main()
{
    Ugly();
    cout<<"The 1500'th ugly number is "<<ugly[1500]<<".\n";
    return 0;
}
