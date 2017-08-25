#include<stdio.h>

int main()
{
    int s3,s1,s2,r[4],i,j,t;
    scanf("%d %d %d",&s1,&s2,&s3);
    r[0]=s1+s2+s3;
    r[1]=2*s1+2*s2;
    r[2]=2*s2+2*s3;
    r[3]=2*s1+2*s3;
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(r[i]>r[j])
            {
                t=r[i];
                r[i]=r[j];
                r[j]=t;
            }
        }
    }
    printf("%d\n",r[0]);
    return 0;
}
