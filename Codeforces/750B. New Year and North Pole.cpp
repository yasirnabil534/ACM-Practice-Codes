#include<bits/stdc++.h>

using namespace std;

int main()
{
    char dir[8];
    int n,i,j,t,cas=0,north=0,south=20000;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %s",&t,dir);
        if(!strcmp("North",dir)&&north!=0)
        {
            north-=t;
            south+=t;
        }
        else if(!strcmp("North",dir)&&north==0)
        {
            cas = 1;
        }
        else if(strcmp("North",dir)&&south==0)
        {
            cas = 5;
        }
        else if(!strcmp("South",dir)&&south!=0)
        {
            north+=t;
            south-=t;
        }
        else if(!strcmp("South",dir)&&south==0)
        {
            cas = 2;
        }
        else if(strcmp("South",dir)&&north==0)
        {
            cas = 6;
        }
        if(north<0)
        {
            cas = 3;
        }
        if(south<0)
        {
            cas = 4;
        }

    }
    if(north==0&&cas==0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
