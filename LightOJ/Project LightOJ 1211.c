#include<stdio.h>

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int i,j,n,ans;
        scanf("%d",&n);
        int x1[n],y1[n],z1[n],x2[n],y2[n],z2[n],minx=2147,miny=2147,minz=2147,maxx=-999999,maxy=-999999,maxz=-999999;
        for(i=0;i<n;i++)
            scanf("%d %d %d %d %d %d",&x1[i],&y1[i],&z1[i],&x2[i],&y2[i],&z2[i]);
        for(i=0;i<n;i++)
        {
            if(maxx<x1[i])
                maxx=x1[i];
            if(maxy<y1[i])
                maxy=y1[i];
            if(maxz<z1[i])
                maxz=z1[i];
            if(minx>x2[i])
                minx=x2[i];
            if(miny>y2[i])
                miny=y2[i];
            if(minz>z2[i])
                minz=z2[i];
        }
        ans=(minx-maxx)*(miny-maxy)*(minz-maxz);
        if(ans<=0)
            ans=0;
        printf("Case %d: %d\n",t,ans);
    }
    return 0;
}
