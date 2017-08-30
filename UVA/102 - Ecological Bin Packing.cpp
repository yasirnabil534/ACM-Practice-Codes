#include<iostream>
#include<cstdio>

using namespace std;

int count_move(int a,int b,int c,int ar[])
{
    int i,m=0;
    for(i=0;i<9;i++)
    {
        if(i!=a&&i!=b&&i!=c)
            m+=ar[i];
    }
    return m;
}

int main()
{
    int bin[12],ar[6],i,j;
    while(scanf("%d",&bin[0])!=EOF)
    {
        int Min=2147483647;
        for(i=1;i<9;i++)
            scanf("%d",&bin[i]);
        char str[6][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
        ar[0]= count_move(0,5,7,bin);
        ar[1]= count_move(0,4,8,bin);
        ar[2]= count_move(2,3,7,bin);
        ar[3]= count_move(2,4,6,bin);
        ar[4]= count_move(1,3,8,bin);
        ar[5]= count_move(1,5,6,bin);
        for(i=0;i<6;i++)
            if(Min>ar[i])
            {
                Min=ar[i];
                j=i;
            }
        printf("%s %d\n",str[j],Min);
    }
    return 0;
}
