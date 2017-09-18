#include<bits/stdc++.h>

using namespace std;

long long int arr[100005];
long long int tree[300005];

void init(long long int node, long long int b,long long int e)
{
    if(b==e)
    {
        tree[node] = arr[b];
        return;
    }
    long long int left = node*2;
    long long int right = node*2+1;
    long long int mid = (b+e)/2;
    init(left,b,mid);
    init(right,mid+1,e);
    tree[node] = tree[left]+tree[right];
}

long long int query(long long int node, long long int b,long long int e,long long int i,long long int j)
{
    if(i>e||j<b) return 0;
    if(b>=i&&e<=j) return tree[node];
    long long int left = node*2;
    long long int right = node*2+1;
    long long int mid = (b+e)/2;
    long long int p1 = query(left,b,mid,i,j);
    long long int p2 = query(right,mid+1,e,i,j);
    return p1+p2;
}

void update(long long int node,long long int b,long long int e,long long int i,long long int newval)
{
    if(i>e||i<b) return;
    if(i<=b&&i>=e)
    {
        tree[node] = newval;
        return;
    }
    long long int left = node*2;
    long long int right = node*2+1;
    long long int mid = (b+e)/2;
    update(left,b,mid,i,newval);
    update(right,mid+1,e,i,newval);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    int t, T;
    scanf("%lld",&T);
    for(t=1;t<=T;t++)
    {
        long long int n,q;
        scanf("%lld %lld",&n,&q);
        for(int i=1;i<=n;i++) scanf("%lld",&arr[i]);
        init(1,1,n);
        printf("Case %d:\n",t);
        for(int ii=0;ii<q;ii++)
        {
            long long int i,j,k;
            scanf("%lld",&k);
            if(k==1)
            {
                scanf("%lld",&i);i++;
                printf("%lld\n",arr[i]);
                arr[i]=0;
                update(1,1,n,i,0);
            }
            else if(k==2)
            {
                scanf("%lld %lld",&i,&j);i++;
                long long int newval = arr[i]+j;
                arr[i]+=j;
                update(1,1,n,i,newval);
            }
            else if(k==3)
            {
                scanf("%lld %lld",&i,&j);i++;j++;
                printf("%lld\n",query(1,1,n,i,j));
            }
        }
    }
    return 0;
}
