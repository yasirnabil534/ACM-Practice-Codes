#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{

    int i,j,n,temp;
    scanf("%d",&n);
    int ev[n],od[n],even=0,odd=0;
    for(i=0; i<n; i++)
    {
        scanf("%d",&j);
        if(j%2==0)
            ev[even++]=j;
        else
            od[odd++]=j;
    }
    sort(ev,ev+even);
    sort(od,od+odd);
    /**for(i=0; i<even; i++)
    {
        for(j=i+1; j<even; j++)
        {
            if(ev[i]>ev[j])
            {
                temp=ev[i];
                ev[i]=ev[j];
                ev[j]=temp;
            }
        }
    }
    for(i=0; i<odd; i++)
    {
        for(j=i+1; j<odd; j++)
        {
            if(od[i]<od[j])
            {
                temp=od[i];
                od[i]=od[j];
                od[j]=temp;
            }
        }
    }*/
    for(i=0;i<even;i++)
        printf("%d\n",ev[i]);
    for(i=odd-1;i>=0;i--)
        printf("%d\n",od[i]);
    return 0;
}
