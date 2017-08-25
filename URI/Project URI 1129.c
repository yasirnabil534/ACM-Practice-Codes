#include <stdio.h>

int main() {

    int i,n,a,b,c,d,e,x,y=0,z,j;

    for(j=1;;j++)
    {
        scanf("%d",&n);
        if(n==0)
        {
            break;
        }
        else
        {
            for(i=1;i<=n;i++)
            {
                z=0;
                scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
                if(a>=0&&a<=127)
                {
                    x=1;
                    z++;
                }
                if(a>127&&a<=255)
                {
                    y++;
                }
                if(b>=0&&b<=127)
                {
                    x=2;
                    z++;
                }
                if(b>127&&b<=255)
                {
                    y++;
                }
                if(c>=0&&c<=127)
                {
                    x=3;
                    z++;
                }
                if(c>127&&c<=255)
                {
                    y++;
                }
                if(d>=0&&d<=127)
                {
                    x=4;
                    z++;
                }
                if(d>127&&d<=255)
                {
                    y++;
                }
                if(e>=0&&e<=127)
                {
                    x=5;
                    z++;
                }
                if(e>127&&e<=255)
                {
                    y++;
                }
                if(z==1)
                {
                    if(x==1)
                    {
                        printf("A\n");
                    }
                    else if(x==2)
                    {
                        printf("B\n");
                    }
                    else if(x==3)
                    {
                        printf("C\n");
                    }
                    else if(x==4)
                    {
                        printf("D\n");
                    }
                    else if(x==5)
                    {
                        printf("E\n");
                    }
                }
                else
                {
                    printf("*\n");
                }
            }
        }
    }
    return 0;
}
