#include<stdio.h>

int main()
{
    int i,j,k,p,n;
    char ch,an;

    for(i=0; ;i++)
    {
        scanf("%c",&ch);
        if(ch==EOF)
        {
            printf("\n");
            break;
        }
        if(ch =='b'||ch =='j'||ch =='p'||ch =='s'||ch =='v'||ch =='f'||ch =='x'||ch =='z')
            ch ='f';
        else if(ch =='B'||ch =='J'||ch =='P'||ch =='S'||ch =='V'||ch =='X'||ch =='F'||ch =='Z')
            ch ='F';
        if(i>0)
        {
            if(an!=ch&&(an!='f'||an!='F'))
                printf("%c",ch);
        }
        else if(ch==0)
            printf("%c",ch);
        an=ch;

    }
    /**an[0]=ch[0];
    for(j=1,k=1; j<=i; j++)
    {
        if((ch[j]=='f'&&ch[j-1]!='f'&&ch[j-1]!='F')||(ch[j]=='F'&&ch[j-1]!='F'&&ch[j-1]!='f'))
        {
            an[k]=ch[j];
            k++;
            //printf("No.1:ch[j]=%c,ch[j+1]=%c,an[k]=%c,k=%d,j=%d\n",ch[j],ch[j+1],an[k-1],k,j);
        }
        else if((ch[j]!='f'&&ch[j-1]!='f')&&(ch[j]!='F'&&ch[j-1]!='F'))
        {
            an[k]=ch[j];
            k++;
            //printf("No.2:ch[j]=%c,ch[j+1]=%c,an[k]=%c,k=%d,j=%d\n",ch[j],ch[j+1],an[k-1],k,j);
        }
        else if((ch[j]!='f'&&(ch[j-1]=='f'||ch[j-1]=='F'))&&(ch[j]!='F'&&(ch[j-1]=='f'||ch[j-1]=='F')))
        {
            an[k]=ch[j];
            k++;
            //printf("No.3:ch[j]=%c,ch[j+1]=%c,an[k]=%c,k=%d,j=%d\n",ch[j],ch[j+1],an[k-1],k,j);
        }
    }
    an[k]='\0';
    for(j=0; j<k; j++)
        printf("%c",an[j]);
        //printf("\n");*/
    return 0;
}
