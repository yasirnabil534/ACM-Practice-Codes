#include<stdio.h>

int main()
{
int i,j,n,k;
while(1){
scanf("%d",&n);
if(n<=125&&n>0)
    break;
}
for(i=1;i<=n;i++)
{
while(1){
scanf("%d %d",&j,&k);
if(j<=10&&j>0&&k<=10&&k>0)
    break;
}
printf("Case %d: %d\n",i,j+k);
}
return 0;
}
