#include<bits/stdc++.h>

using namespace std;

/**
Need an observation: Starting limit and ending limit
1/k = 1/x + 1/y ------- (1)
or, x = (ky)/(y-k) ---- (2)

in equation (1), we can see that 1/k = 1/2k + 1/2k for sure
and if we guess x = k, then y = infinity which is impossible.

Then x should be at least k+1

from equation (2), we get y = k(k+1) or, y = (k(k+1))/1 when x = k+1
y = k(k+2)/2 when x = k + 2
y = k(k+3)/3 when x = k + 3
.
.
y = k(k+k)/k = 2k when x = k+k = 2k

Here y and x becomes equal, that means from here
everything will be reverse calculated which is not needed
that means if we count y = k(k+k+1)/(k+1)
or, y = k(2k+1)/(k+1) for x = 2k + 1 then y will be smaller
than x and one time y will be k+1 and x will be k(k+1) which
is already calculated at line 15

So the maximum limit of x will be 2k

Now, do the program on a for loop
*/

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int res[100005],nRes = 0;
        for(int i = n+1; i <= 2*n; i++)
        {
            if(((n*i)%(i-n))==0)
            {
                int p = (n*i)/(i-n);
                if(i<=p)
                {
                    res[nRes++] = p;
                    res[nRes++] = i;
                }
            }
        }
        printf("%d\n",nRes/2);
        for(int i = 0; i < nRes; i+=2)
        {
            printf("1/%d = 1/%d + 1/%d\n",n,res[i],res[i+1]);
        }
    }
    return 0;
}
