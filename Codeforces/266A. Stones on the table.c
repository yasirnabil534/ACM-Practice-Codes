#include<stdio.h>

int main()
{
	int n,i,j=0,p;
	scanf("%d",&n);
	getchar();
	char s[n];
	for(i=0;i<n;i++){
	scanf("%c",&s[i]);}
	for(i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1]){
		j++;}
	}
	printf("%d\n",j);
	return 0;
}