#include<stdio.h>

int main()
{
    int i,j,k,l,m,n,d,a=0,b=0,p=0;
    scanf("%d %d %d %d %d",&k,&l,&m,&n,&d);
    int ar[d];
    for(i=0;i<d;i++)
        ar[i]=1;
    for(i=k-1;i<d;i+=k)
    {
        if(ar[i]==1)
            ar[i]=0;
    }
    for(i=l-1;i<d;i+=l)
        if(ar[i]==1)
            ar[i]=0;
    for(i=m-1;i<d;i+=m)
        if(ar[i]==1)
            ar[i]=0;
    for(i=n-1;i<d;i+=n)
        if(ar[i]==1)
            ar[i]=0;
    for(i=0;i<d;i++)
        if(ar[i]==0)
            p++;
    printf("%d\n",p);
    return 0;
}
