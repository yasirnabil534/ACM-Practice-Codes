#include<stdio.h>

int main()
{
    int a,b,x,y,i,p,q;
    for(i=1;;i++)
    {
        scanf("%d %d",&a,&b);
        if(a==0&&b==0)
        {
            break;
        }
        else
        {
            if(a>=b)
            {
                x=b;
                y=a;
            }
            else if(a<b)
            {
                x=a;
                y=b;
            }
            p=y-x;
            q=x-p;
            printf("%d\n",q);
        }
    }
    return 0;
}
