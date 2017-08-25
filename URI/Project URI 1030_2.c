#include<stdio.h>

int main()
{
    int soilder,dead,count,i,j,k,test,step,determine;
    scanf("%d",&test);
    for(k=1; k<=test; k++)
    {
        scanf("%d %d",&soilder,&step);
        int ar[soilder];
        count=0;
        dead=0;
        determine=0;
        for(i=0; i<soilder; i++)
        {
            ar[i]=i+1;
        }
        while(1)
        {
            for(i=0; i<soilder; i++)
            {
                if(ar[i]!=0)
                {
                    determine++;
                }
                if(determine==step)
                {
                    ar[i]=0;
                    dead=i+1;
                    determine=0;
                    count++;
                }
            }
            if(count==soilder)
                break;
        }
        printf("Case %d: %d\n",k,dead);
    }
    return 0;
}
