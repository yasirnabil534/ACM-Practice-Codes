#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,pre,carry,m,n,min,x,y,max;
    int ar[100000],key=0;
    char a[15],b[15];
    while(1)
    {
        pre=0;
        carry=0;
        scanf("%s %s",b,a);
        if(strcmp(a,"0")==0&&strcmp(b,"0")==0)
            break;
        m=strlen(a);
        n=strlen(b);
        if(m<n)
        {
            min=n-m;
            for(i=m,j=0;j<=m;j++,i--)
            {
                a[i+min]=a[i];
            }
            for(j=min-1;j>=0;j--)
            {
                a[j]='0';
            }
        }
        else if(n<m)
        {
            min=m-n;
            for(i=n,j=0;j<=n;j++,i--)
            {
                b[i+min]=b[i];
            }
            for(j=min-1;j>=0;j--)
            {
                b[j]='0';
            }
        }
        max = (m>n)?m:n;
        for(i=max-1;i>=0;i--)
        {
            x = a[i]-'0';
            y = b[i]-'0';
            if(x+y+pre>=10)
            {
                carry++;
                pre=(x+y+pre)/10;
            }
            else
                pre=0;
        }
        ar[key]=carry;
        key++;
    }
    for(i=0;i<key;i++)
    {

        if(ar[i]==0)
            printf("No carry operation.\n");
        else if(ar[i]==1)
            printf("1 carry operation.\n");
        else
            printf("%d carry operations.\n",ar[i]);
    }
    return 0;
}

