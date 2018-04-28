#include<bits/stdc++.h>

using namespace std;

void Reverse(char arr[], int x)
{
    char ch;
    for(int i = 0; i < (x/2); i++)
    {
        ch = arr[i];
        arr[i] = arr[x-i-1];
        arr[x-i-1] = ch;
    }
    arr[x] = '\0';
}


int main()
{
    long long int n;
    while(1)
    {
        scanf("%lld",&n);
        if(n==0) break;
        long long int m = n, cnt = 0, one = 0;
        char arr[70];
        while(m>0)
        {
            if(m%2==0) arr[cnt++] = '0';
            else
            {
                arr[cnt++] = '1';
                one++;
            }
            m /= 2;
        }
        arr[cnt]='\0';
        Reverse(arr, cnt);
        printf("The parity of %s is %lld (mod 2).\n",arr,one);
    }
    return 0;
}
