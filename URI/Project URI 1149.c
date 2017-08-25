#include <stdio.h>

int main() {

    int N,A,R,k,m;
    double i,j;
    for(k=1;(scanf("%d %d",&A,&N))!=EOF;k++)
    {

    if(N<=0)
    {
        for(m=1;N<=0;m++){
        scanf("%d",&N);
        }
    }
    i=N;
    j=(i/2)*(2*A+(i-1));
    R=j;
    printf("%d\n",R);
    }
    return 0;
}
