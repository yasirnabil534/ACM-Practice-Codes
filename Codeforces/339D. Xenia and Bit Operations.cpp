#include<bits/stdc++.h>

using namespace std;

int tree[3000005];
int arr[1000005];
void init2(int node, int b, int e);
void update2(int node, int b, int e, int i, int newvalue);
void init1(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init2(Left, b, mid);
    init2(Right, mid + 1, e);
    tree[node] = tree[Left] ^ tree[Right];
}

void init2(int node, int b, int e)
{
    if (b == e) {
        tree[node] = arr[b];
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    init1(Left, b, mid);
    init1(Right, mid + 1, e);
    tree[node] = tree[Left] | tree[Right];
}

void update1(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update2(Left, b, mid, i, newvalue);
    update2(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] ^ tree[Right];
}

void update2(int node, int b, int e, int i, int newvalue)
{
    if (i > e || i < b)
        return;
    if (b >= i && e <= i) {
        tree[node] = newvalue;
        return;
    }
    int Left = node * 2;
    int Right = node * 2 + 1;
    int mid = (b + e) / 2;
    update1(Left, b, mid, i, newvalue);
    update1(Right, mid + 1, e, i, newvalue);
    tree[node] = tree[Left] | tree[Right];
}

int main()
{
    unsigned long long int n,m,p,a,b;
    cin>>p>>m;
    n = 1<<p;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    if(p%2) init2(1,1,n);
    else init1(1,1,n);
    for(int i=1;i<=m;i++)
    {
        cin>>a>>b;
        arr[a] = b;
        if(p%2) update2(1,1,n,a,b);
        else update1(1,1,n,a,b);
        cout<<tree[1]<<endl;
    }
    return 0;
}

