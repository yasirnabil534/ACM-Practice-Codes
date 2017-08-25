#include<stdio.h>

int main()
{
    int test,bank,debnum,debval,debt,cred,i,j,temp;
    while(1)
    {
        scanf("%d %d",&bank,&debnum);
        if(bank==0&&debnum==0)
            break;
        int bnk[bank];
        for(i=0;i<bank;i++)
        {
            scanf("%d",&bnk[i]);
        }
        temp=0;
        for(j=1;j<=debnum;j++)
        {
            scanf("%d %d %d",&debt,&cred,&debval);
            bnk[debt-1]-=debval;
            bnk[cred-1]+=debval;
        }
        for(j=0;j<bank;j++)
        {
            if(bnk[j]<0)
            {
                temp=1;
                break;
            }
        }
        if(temp==0)
            printf("S\n");
        else if(temp==1)
            printf("N\n");
    }
    return 0;
}
