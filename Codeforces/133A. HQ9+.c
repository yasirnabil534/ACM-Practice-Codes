#include<stdio.h>
#include<string.h>

int main()
{
	int n,i,j=0;
	char s[10000];
	scanf("%s",s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]=='H'||s[i]=='Q'||s[i]=='9')
		{
			j=1;
			break;
		}
		else if(s[n-1]=='+')
            break;
	}
	if(j==1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}
