#include<stdio.h>


int main()
{
    int p,j1,j2,r,a,x,m;
    scanf("%d %d %d %d %d",&p,&j1,&j2,&r,&a);
    if((r==1&&a==0)||(r==0&&a==1))
        x=1;
    else if(r==1&&a==1)
        x=2;
    else
    {
        m=j1+j2;
        if(p==1&&m%2==0)
            x=1;
        else if(p==0&&m%2!=0)
            x=1;
        else if(m%2!=0)
            x=2;
        else if(m%2==0)
            x=2;
    }
    printf("Jogador %d ganha!\n",x);
    return 0;
}
