#include<stdio.h>

int main()
{
    int a,b,i,j,p,q,n,m;
    while(1)
    {
        p=0;
        q=0;
        scanf("%d",&n);
        if(n==0)
            break;
        int ar[n+2],br[n+2];

        for(i=0;i<n+2;i++)
        {
            ar[i]=0;
            br[i]=0;
        }

        for(i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
        }

        for(j=0;j<n;j++)
        {
            scanf("%d",&br[j]);
        }

        a=0;
        b=0;
        for(i=0;i<n;i++)
        {
            if(ar[i]==ar[i+1]&&ar[i]==ar[i+2]&&(ar[i]!=0&&a!=1&&b!=2))
            {
                p+=30+ar[i];
                if(b!=2)
                    a=1;
            }
            else
            {
                p+=ar[i];
            }
            if(br[i]==br[i+1]&&br[i]==br[i+2]&&(br[i]!=0&&b!=1&&b!=2))
            {
                q+=30+br[i];
                if(a!=2)
                    b=1;
            }
            else
            {
                q+=br[i];
            }
            if(a==1&&b==1)
            {
                p-=30;
                q-=30;
                a=2;
                b=2;
            }
            if(a==1||b==1)
            {
                a=2;
                b=2;
            }
        }
        if(p>q)
            printf("M\n");
        else if(q>p)
            printf("L\n");
        else if(p==q)
            printf("T\n");
    }
    return 0;
}
