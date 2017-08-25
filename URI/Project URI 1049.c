#include<stdio.h>

int main()
{
    char ve[] = "vertebrado";
    char ive[]="invertebrado";
    char a[]="ave";
    char m[]="mamifero";
    char in[]="inseto";
    char ani[]="anelideo";
    char car[]="carnivoro";
    char on[]="onivoro";
    char her[]="herbivoro";
    char hem[]="hematofago";
    char sc1[20],sc2[20],sc3[20];
    int x,y,z;
    scanf("%s %s %s",sc1,sc2,sc3);
    if((strcmp(sc1,ve))==0)
    {
        if((strcmp(sc2,a))==0)
        {
            if((strcmp(sc3,car))==0)
            {
                printf("aguia\n");
            }
            else if((strcmp(sc3,on))==0)
            {
                printf("pomba\n");
            }
        }
        else if((strcmp(sc2,m))==0)
        {
            if((strcmp(sc3,her))==0)
            {
                printf("vaca\n");
            }
            else if((strcmp(sc3,on))==0)
            {
                printf("homem\n");
            }
        }
    }
    else if((strcmp(sc1,ive))==0)
    {
        if((strcmp(sc2,ani))==0)
        {
            if((strcmp(sc3,hem))==0)
            {
                printf("sanguessuga\n");
            }
            else if((strcmp(sc3,on))==0)
            {
                printf("minhoca\n");
            }
        }
        else if((strcmp(sc2,in))==0)
        {
            if((strcmp(sc3,her))==0)
            {
                printf("lagarta\n");
            }
            else if((strcmp(sc3,hem))==0)
            {
                printf("pulga\n");
            }
        }
    }
    return 0;
}
