#include<stdio.h>

int main()
{
    int f,s,t;
    scanf("%d %d %d",&f,&s,&t);
    if((t-s)>(s-f))
        printf(":)\n");
    else if((t>s&&s>f)&&((t-s)==(s-f)))
        printf(":)\n");
    else
        printf(":(\n");
    return 0;
}
