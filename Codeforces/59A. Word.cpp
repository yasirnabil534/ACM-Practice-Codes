#include<bits/stdc++.h>
#include<cstring>

int main()
{
    int i,j,s=0,c=0,n;
    char ch[100];
    scanf("%s",ch);
    n = strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]>='a'&&ch[i]<='z')
            s++;
        else if(ch[i]>='A'&&ch[i]<='Z')
            c++;
    }
    if(c>s)
        strupr(ch);
    else
        strlwr(ch);
    printf("%s\n",ch);
    return 0;
}
