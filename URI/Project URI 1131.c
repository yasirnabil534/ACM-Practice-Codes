#include <stdio.h>

int main()
{
    int inter=0,gremio=0,draw=0,dis,i,in,gr;
    scanf("%d %d",&in,&gr);
    if(in>gr)
    {
        inter++;
    }
    else if(gr<in)
    {
        gremio++;
    }
    else if(in==gr)
    {
        draw++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    for(i=1;;i++)
    {
        scanf("%d",&dis);
        if(dis==1)
        {
        scanf("%d %d",&in,&gr);
        if(in>gr)
        {
            inter++;
        }
        else if(gr>in)
        {
            gremio++;
        }
        else if(in==gr)
        {
            draw++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        }
        else
        {
            break;
        }
    }
    printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n",i,inter,gremio,draw);
    if(inter>gremio)
    {
        printf("Inter venceu mais\n");
    }
    else if(inter<gremio)
    {
        printf("Gremio venceu mais\n");
    }
    else if(inter>gremio)
    {
        printf("Nao houve vencedor\n");
    }
    return 0;
}

