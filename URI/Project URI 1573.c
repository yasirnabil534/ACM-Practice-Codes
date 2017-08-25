#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,i,res;
    double r,t;
    for(i=1;;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==0&&b==0&&c==0)
            break;
        t=a*b*c;
        r=pow(t,(1.0/3.0));
        res=r;
        printf("%d\n",res);
    }
    return 0;
}
