#include<bits/stdc++.h>

using namespace std;

int arr[100005];
int tree[300005];

int Min(int i,int j)
{
    return (i<j)?i:j;
}

void init(int node, int b, int e)
{
    if(b==e)
    {
        tree[node] = arr[b]; return;
    }
    int left = node*2;
    int right = node * 2 + 1;
    int mid = (b + e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = Min(tree[left],tree[right]);
}

int query(int node, int b, int e, int I, int J)
{
    if(I>e||J<b) return 1000000;
    if(b>=I&&e<=J) return tree[node];
    int left = node*2;
    int right = node * 2 + 1;
    int mid = (b + e)/2;
    int p1 = query(left,b,mid,I,J);
    int p2 = query(right,mid+1,e,I,J);
    return Min(p1,p2);
}

int main()
{
    int t,T;
    scanf("%d",&T);
    for(t=1;t<=T;t++)
    {
        int n,q,ii,jj;
        scanf("%d %d",&n,&q);
        memset(arr,-1,sizeof(arr));
        for(int i=1;i<=n;i++)
            scanf("%d",&arr[i]);
        init(1,1,n);
        printf("Case %d:\n",t);
        for(int i=0;i<q;i++)
        {
            scanf("%d %d",&ii,&jj);
            int res = query(1,1,n,ii,jj);
            printf("%d\n",res);
        }
    }
    return 0;
}
