#include<stdio.h>

int main()
{
    int i,j,n,b,s=0,p=0;
    scanf("%d",&n);
    int up[n],dn[n],r[n];
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&dn[i],&up[i]);
    }
    r[0]=up[0];
    for(i=1;i<n;i++)
    {
        r[i]=up[i]-dn[i]+r[i-1];
    }
    for(i=0;i<n;i++)
        for(j=i;j<n;j++)
        {
            if(r[j]>r[i])
            {
                s=r[j];
                r[j]=r[i];
                r[i]=s;
            }
        }
    printf("%d\n",r[0]);
    return 0;
}
