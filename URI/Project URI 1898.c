#include<stdio.h>
#include<stdlib.h>


int main()
{
    char ch[62],st[10000],a[12],b[10000],c[10000];
    int i,j=0,k=0,temp=0,n,x=0,y=0,ar[10],d=0;
    double p,q,sum;
    scanf("%s",ch);
    getchar();
    scanf("%s",b);
    for(i=0;;i++)
    {
        if(ch[i]=='\n'||ch[i]=='\0')
            break;
        if(ch[i]=='.')
        {
            st[k++]=ch[i];
            temp=1;
        }
        if(x==11)
        {
            temp=2;
            x++;
        }
        if(ch[i]>='0'&&ch[i]<='9'&&temp==0)
        {
            a[j++]=ch[i];
            x++;
        }
        if(ch[i]>='0'&&ch[i]<='9'&&temp==2)
        {
            st[k++]=ch[i];
        }
        if(ch[i]>='0'&&ch[i]<='9'&&temp==1&&d<3)
        {
            st[k++]=ch[i];
            d++;
        }
        if(d==2)
            break;
    }
    a[j]='\0';
    st[k]='\0';
    p=atof(st);
    temp=0;
    d=0;
    for(i=0;;i++)
    {
        if(b[i]=='\n'||b[i]=='\0')
            break;
        if(b[i]=='.')
        {
            temp=1;
            c[y++]=b[i];
        }
        if(b[i]>='0'&&b[i]<='9'&&temp==0)
            c[y++]=b[i];
        if(b[i]>='0'&&b[i]<='9'&&temp==1&&d<3)
        {
            c[y++]=b[i];
            d++;
        }
        if(d==2)
            break;
    }
    c[y]='\0';
    q=atof(c);
    sum=p+q;
    printf("cpf %s\n%.2lf\n",a,sum);
    return 0;
}
