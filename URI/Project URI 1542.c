#include <stdio.h>
#include <math.h>

int main() {

    int q,d,j,p,i,w;
    double k;
    for(j=1;;j++)
    {
        scanf("%d",&q);
        if(q==0)
        {
            break;
        }
        else
        {
            scanf("%d %d",&d,&p);
            if(d<=0||p<=0||p<=q)
            {
                return 0;
            }
            else
            {
            k=((p*d*1.0)/(p-q))*q;
            w=k;
            if(w==1)
            {
                printf("%d pagina\n",w);
            }
            else
            {
                printf("%d paginas\n",w);
            }
            }
        }
    }

    return 0;
}
