#include <stdio.h>
#include<string.h>

int main()
{
	int n,d,i,x,j,p,ans=0,q,max=0;
	scanf("%d %d",&n,&d);
	char ch[d][n+5];
	int ar[d];
	getchar();
	for(i=0;i<d;i++)
        gets(ch[i]);
    for(i=0;i<d;i++)
    {
        q=0;
        x=strlen(ch[i]);
        for(j=0,p=0;j<x;j++)
        {
            if(ch[i][j]=='0')
            {
                p=1;
                break;
            }
        }
        if(p==1)
            ar[i]=0;
        else
            ar[i]=1;
        /**if(ar[i]==1)
        {
            q++;
            if(max<q)
                max=q;
        }
        else
            q=0;
        ans=max;*/
    }
    for(i=0;i<d;i++)
    {
        if(ar[i]==0)
        {
            q++;
            if(max<q)
                max=q;
        }
        else
            q=0;
        ans=max;
    }
    printf("%d\n",ans);
	return 0;
}

