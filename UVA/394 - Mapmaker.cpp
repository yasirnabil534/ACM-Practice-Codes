#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N,R,i,j,k,x,ans;
    scanf("%d %d",&N,&R);
    int B[N],SA[N],D[N],Di[N][11][2];
    char str[N][11],ch[R][11];
    for(i=0;i<N;i++)
    {
        scanf("%s %d %d %d",str[i],&B[i],&SA[i],&D[i]);
        for(j=0;j<D[i];j++)
        {
            scanf("%d %d",&Di[i][j][0],&Di[i][j][1]);
        }
    }
    for(i=0;i<R;i++)
    {
        scanf("%s",ch[i]);
        for(x=0;strcmp(str[x],ch[i])!=0;x++);
        j=D[x];
        int ar[j],C[j+1];
        for(k=0;k<j;k++)
            scanf("%d",&ar[k]);
        C[j] = SA[x];
        for(k=j-1;k>=1;k--)
        {
            C[k] = C[k+1]*(Di[x][k][1]-Di[x][k][0]+1);
        }
        C[0] = 0;
        for(k=0;k<j;k++)
        {
            C[0] += C[k+1]*Di[x][k][0];
        }
        C[0]=B[x]-C[0];
        for(k=0,ans=0;k<j;k++)
            ans+=(C[k+1]*ar[k]);
        ans+=C[0];
        printf("%s[",ch[i]);
        for(k=0;k<j;k++)
        {
            if(k!=0)
                printf(", ");
            printf("%d",ar[k]);
        }
        printf("] = %d\n",ans);
    }
    return 0;
}
