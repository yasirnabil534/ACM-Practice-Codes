#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,n,p;
	char s[10000],t;
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i+=2)
	{
		for(j=i;j<n;j+=2)
		{
			if(s[j]<s[i])
			{
				t=s[j];
				s[j]=s[i];
				s[i]=t;
			}
		}
	}
	printf("%s\n",s);
	return 0;
}