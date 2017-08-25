#include<stdio.h>
#include<string.h>
main()
{
    int i,j,n,p;
    for(i=0;;i++)
    {
        scanf("%d",&n);
        char ch[n];
        if(n==0)
            break;
        scanf("%s",ch);
        j=1;
        for(p=0;p<n;p++)
        {
            if(ch[p]=='D')
            {
                j++;
            }
            else if(ch[p]=='E')
            {
                j--;
            }
        }
        if(j%4==1||j%4==-3)
        {
            printf("N\n");
        }
        else if(j%4==2||j%4==-2)
        {
            printf("L\n");
        }
        else if(j%4==3||j%4==-1)
        {
            printf("S\n");
        }
        else if(j%4==0)
        {
            printf("O\n");
        }
    }
    return 0;
}
