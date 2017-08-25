#include<stdio.h>
#include<math.h>

int main()
{
    int arr[1001][2],i,j,count,temp,T,t;
    arr[0][0] = 0;
    arr[0][1] = 0;
    arr[1][0] = 1;
    arr[1][1] = 1;
    for(i=2; i<=1000; i++)
    {
        count=0;
        for(j=1000; j>=1; j--)
        {
            if(i%j==0)
                count++;
        }
        arr[i][0] = i;
        arr[i][1]=count;
    }
    for(i=2;i<=1000;i++)
    {
        for(j=i+1;j<=1000;j++)
        {
            if(arr[i][1]>arr[j][1])
            {
                temp=arr[i][0];
                arr[i][0]=arr[j][0];
                arr[j][0]=temp;
                temp=arr[i][1];
                arr[i][1]=arr[j][1];
                arr[j][1]=temp;
            }
            if(arr[i][1]==arr[j][1]&&arr[i][0]<arr[j][0])
            {
                temp=arr[i][0];
                arr[i][0]=arr[j][0];
                arr[j][0]=temp;
                temp=arr[i][1];
                arr[i][1]=arr[j][1];
                arr[j][1]=temp;
            }
        }
    }
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n;
        scanf("%d",&n);
        printf("Case %d: %d\n",t,arr[n][0]);
    }
}

