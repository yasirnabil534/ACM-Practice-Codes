#include<stdio.h>

int main()
{
    long long int a,b,c,x,y,z,p,q,r,m=0,n=0,f=0,bol=1,col=1,dol=1;
    scanf("%I64d %I64d %I64d",&a,&b,&c);
    scanf("%I64d %I64d %I64d",&x,&y,&z);
    p=a-x;
    q=b-y;
    r=c-z;
    if(p>=0)
        m=1;
    if(q>=0)
        n=1;
    if(r>=0)
        f=1;
    while(1)
    {
        if(m==1&&n==1&&f==1)
        {
            printf("Yes\n");
            break;
        }
        else if(m==0&&n==0&&f==0)
        {
            printf("No\n");
            break;
        }
        else
        {
            while(m==0)
            {
                bol=0;
                if(q>=2)
                {
                    p++;
                    q-=2;
                    bol++;
                }
                else if(r>=2)
                {
                    p++;
                    r-=2;
                    bol++;
                }
                if(bol==0)
                    break;
                if(p>=0)
                    m=1;
            }
            while(n==0)
            {
                col=0;
                if(p>=2)
                {
                    q++;
                    p-=2;
                    col++;
                }
                else if(r>=2)
                {
                    q++;
                    r-=2;
                    col++;
                }
                if(col==0)
                    break;
                if(q>=0)
                    n=1;
            }
            while(f==0)
            {
                dol=0;
                if(q>=2)
                {
                    r++;
                    q-=2;
                    dol++;
                }
                else if(p>=2)
                {
                    r++;
                    p-=2;
                    dol++;
                }
                if(dol==0)
                    break;
                if(r>=0)
                    f=1;
            }
            if(bol==0||col==0||dol==0)
            {
                m=0;
                n=0;
                f=0;
            }
        }
    }
    return 0;
}
