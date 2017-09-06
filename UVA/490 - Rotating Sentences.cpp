#include<bits/stdc++.h>
#include<cstring>

using namespace std;

int main()
{
    char str[105][105];
    int i=0,Max=-1,p;
    while(gets(str[i])!=NULL)
    {
        p = strlen(str[i]);
        if(Max<p)
            Max = p;
        i++;
        //getchar();
    }
    for(int j=0;j<Max;j++)
    {
        for(int k=i-1;k>=0;k--)
        {
            p = strlen(str[k]);
            if(j>=p) printf(" ");
            else printf("%c",str[k][j]);
        }
        printf("\n");
    }
    return 0;
}
