#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n;
    char a[50],b[50],*r,*c1,*c2,*c3,*c4,*c5;
    c1="tesoura";
    c2="papel";
    c3="lagarto";
    c4="pedra";
    c5="Spock";
    while(1)
    {
        scanf("%d",&n);
        if(n>0&&n<=100)
            break;
    }
    for(i=1;i<=n;i++)
    {
        scanf("%s %s",a,b);
        if(strcmp(a,c1)==0)
        {
            if(strcmp(b,c2)==0)
                r="Bazinga!";
            else if(strcmp(b,c3)==0)
                r="Bazinga!";
            else if(strcmp(b,c1)==0)
                r="De novo!";
            else if(strcmp(b,c4)==0||strcmp(b,c5)==0)
                r= "Raj trapaceou!";
        }
        else if(strcmp(a,c2)==0)
        {
            if(strcmp(b,c4)==0)
                r="Bazinga!";
            else if (strcmp(b,c5)==0)
                r="Bazinga!";
            else if (strcmp(b,c2)==0)
                r="De novo!";
            else if(strcmp(b,c3)==0||strcmp(b,c1)==0)
                r="Raj trapaceou!";
        }
        else if(strcmp(a,c4)==0)
        {
            if (strcmp(b,c3)==0)
                r="Bazinga!";
            else if(strcmp(b,c1)==0)
                r="Bazinga!";
            else if (strcmp(b,c4)==0)
                r="De novo!";
            else if(strcmp(b,c2)==0||strcmp(b,c5)==0)
                r="Raj trapaceou!";
        }
        else if (strcmp(a,c3)==0)
        {
            if (strcmp(b,c5)==0)
                r="Bazinga!";
            else if(strcmp(b,c2)==0)
                r="Bazinga!";
            else if (strcmp(b,c3)==0)
                r="De novo!";
            else if(strcmp(b,c4)==0||strcmp(b,c1)==0)
                r="Raj trapaceou!";
        }
        else if (strcmp(a,c5)==0)
        {
            if(strcmp(b,c4)==0)
                r="Bazinga!";
            else if(strcmp(b,c1)==0)
                r="Bazinga!";
            else if(strcmp(b,c5)==0)
                r="De novo!";
            else if(strcmp(b,c3)==0||strcmp(b,c2)==0)
                r="Raj trapaceou!";
        }
        printf("Caso #%d: %s\n",i,r);
    }
    return 0;
}
