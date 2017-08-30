#include<iostream>
#include<cstdio>
#include<cstring>

int main()
{
    char str[100000];
    while(scanf("%[^\n]",str)!=EOF)
    {
        getchar();
        int i,j,cnt=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(!((str[j]>='a'&&str[j]<='z')||(str[j]>='A'&&str[j]<='Z')))
            {
                if((str[j-1]>='a'&&str[j-1]<='z')||(str[j-1]>='A'&&str[j-1]<='Z'))
                    cnt++;
            }
        }
        printf("%d\n",cnt);
    }
    return 0;
}

