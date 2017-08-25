#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,n,ys=0;
    char ch[5];
    int ar[] = {2,4,3,9,5,25,7,49,11,13,17,19,23,29,31,37,41,43,47};
    for(i=0;i<=18;i++)
    {
        printf("%d\n",ar[i]);
        fflush(stdout);
        scanf("%s",ch);
        if(ch[0]=='y')
            ys++;
        if(ys==2)
            break;
    }
    if(ys>1)
        printf("composite\n");
    else
        printf("prime\n");
    return 0;
}
