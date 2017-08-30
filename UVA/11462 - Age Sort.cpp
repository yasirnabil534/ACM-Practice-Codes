#include<bits/stdc++.h>

int main()
{
    int x;
    while(1)
    {
        scanf("%d",&x);
        if(x==0)
            break;
        int i,ar[x];
        for(i=0;i<x;i++)
            scanf("%d",&ar[i]);
        std::sort(ar,ar+x);
        for(i=0;i<x;i++)
        {
            if(i<x-1)
                printf("%d ",ar[i]);
            if(i==x-1)
                printf("%d\n",ar[i]);
        }
    }
    return 0;
}
