#include<bits/stdc++.h>

using namespace std;

vector<int> A, B, C;

int key;

void PRINT(vector<int> X)
{
    int p = X.size();
    for(int i = 0; i < p ; i++)
    {
        if(i>0)
            printf(" ");
        printf("%d",X[i]);
    }
    printf("\n");
}

void PlayGame(int n, int a, int b, int c, int m)
{
    if(n>=1)
    {
        PlayGame(n-1, a, c, b, m);
        if(key >= m) return;
        int p;
        if(a==1)
        {
            p = A.size();
            p = A[p-1];
            A.pop_back();
            if(c==2)
                B.push_back(p);
            else if(c==3)
                C.push_back(p);
        }
        if(a==2)
        {
            p = B.size();
            p = B[p-1];
            B.pop_back();
            if(c==1)
                A.push_back(p);
            else if(c==3)
                C.push_back(p);
        }
        if(a==3)
        {
            p = C.size();
            p = C[p-1];
            C.pop_back();
            if(c==1)
                A.push_back(p);
            else if(c==2)
                B.push_back(p);
        }
        {
            printf("\n");
            printf("A=>");
            if(!A.empty())printf("   ");
            PRINT(A);
            printf("B=>");
            if(!B.empty())printf("   ");
            PRINT(B);
            printf("C=>");
            if(!C.empty())printf("   ");
            PRINT(C);
            key++;
        }
        PlayGame(n-1, b, a, c, m);
    }
}

int main()
{
    int n,nn,m,tc=0;
    while(true)
    {
        scanf("%d %d",&n,&m);
        if(n==0&&m==0)
            break;
        nn=n;
        A.clear();
        B.clear();
        C.clear();
        for(int i = 0; i < n; i++)
            A.push_back(n-i);
        n = log2(m) + 1;
        if(tc>0)
            puts("");
        printf("Problem #%d\n\n",++tc);
        printf("A=>   ");
        PRINT(A);
        printf("B=>\n");
        printf("C=>\n");
        key = 0;
        if(nn%2==n%2)
            PlayGame(n,1,2,3,m);
        else
            PlayGame(n,1,3,2,m);
    }
    printf("\n");
    return 0;
}
