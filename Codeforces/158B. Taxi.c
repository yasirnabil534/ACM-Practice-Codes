#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j,tw=0,tre=0,fr=0;
    double p=0,temp,on=0;
    scanf("%d",&n);
    double a[n];
    for(i=0; i<n; i++)
        scanf("%lf",&a[i]);
    /**for(j=0; j<n; j++)
        for(i=j; i<n; i++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }*/
    for(i=0;i<n;i++)
    {
        if(a[i]==1)
            on++;
        else if(a[i]==2)
            tw++;
        else if(a[i]==3)
            tre++;
        else if(a[i]==4)
            fr++;
    }
    if(on>=tre&&tre!=0)
    {
        p+=tre;
        on-=tre;
        tre=0;
        //printf("p=%lg\n",p);
    }
    else if(tre>on &&on!=0)
    {
        p+=on;
        tre-=on;
        on=0;
        //printf("p=%lg\n",p);
    }
    if(tw%2==0&&tw!=0)
    {
        p+=(tw/2);
        tw=0;
        //printf("p=%lg\n",p);
    }
    else
    {
        p+=(tw/2);
        tw-=((tw/2)*2);
        //printf("p=%lg\n",p);
    }
    if(on>0&&tw>0&&tw<=on)
    {
        p+=tw;
        on-=(tw*2);
        tw=0;
        //printf("p=%lg\n",p);
    }
    if(on>0)
    {
        p+=ceil(on/4);
        //printf("p=%lg\n",p);
    }
    if(tw>0)
    {
        p+=ceil(tw*2.0/4.0);
        //printf("p=%lg\n",p);
    }
    if(tre>0)
    {
        p+=tre;
        //printf("p=%lg\n",p);
    }
    if(fr>0)
    p+=fr;
    //printf("tw=%lg\n",tw);
    printf("%.0lf\n",p);
    return 0;
}
