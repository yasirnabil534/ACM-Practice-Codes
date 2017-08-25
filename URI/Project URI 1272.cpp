#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    scanf("%d",&T);
    getchar();
    for(t=1;t<=T;t++)
    {
        char str[55],ans[55];
        gets(str);
        int i,j=0,len = strlen(str);
        if(str[0]>='a'&&str[0]<='z')
            ans[j++] = str[0];
        for(i=1;i<len;i++)
        {
            if((str[i]>='a'&&str[i]<='z')&&(str[i-1]==' '))
               ans[j++] = str[i];
        }
        ans[j] = '\0';
        printf("%s\n",ans);
    }
    return 0;
}
