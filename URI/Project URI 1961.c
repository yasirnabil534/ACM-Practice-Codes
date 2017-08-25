#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,p,m=0,i;
    scanf("%d %d",&p,&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=1;i<n;i++)
    {
        if(abs(ar[i]-ar[i-1])>p)
        {
            m=1;
            break;
        }
    }
    if(m==0)
        printf("YOU WIN\n");
    else
        printf("GAME OVER\n");
    return 0;
}
