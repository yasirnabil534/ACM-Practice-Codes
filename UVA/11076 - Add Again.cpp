#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int arr[13],fac[13],cnt[10],rat[10];
    arr[0] = 0;
    fac[0] = 1;
    for(int i=1;i<13;i++)
    {
        arr[i] = ((arr[i-1]*10)+1);
        fac[i] = fac[i-1]*i;
        if(i<10)
        {
            cnt[i]=0;
            rat[i]=0;
        }
    }
    unsigned long long int n;
    while(cin>>n)
    {
        if(n==0) break;
        memset(cnt,0,sizeof(cnt));
        set <unsigned long long int> st;
        set <unsigned long long int> ::iterator ii;
        unsigned long long int i,j,ar[n],sum=0,sum2=0,siz,res;
        for(i=0;i<n;i++)
        {
            cin>>ar[i];
            cnt[ar[i]]++;
            st.insert(ar[i]);
        }
        sum2 = fac[n];
        for(ii = st.begin(); ii!= st.end(); ++ii)
        {
            j = *ii;
            sum2/= fac[cnt[j]];
        }
        for(ii = st.begin(); ii!= st.end(); ++ii)
        {
            j = *ii;
            rat[j] = (sum2*cnt[j])/(n*1.0);
            sum+=(rat[j]*j);
        }
        cout<<sum*arr[n]<<endl;
    }
    return 0;
}
