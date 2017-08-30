#include<bits/stdc++.h>

using namespace std;

struct Matrix
{
    int arr[2][2];
    int column,row;
    Matrix()
    {
        column = row = 0;
    }
};

int mod;

Matrix Multiply(Matrix A, Matrix B, int mod)
{
    Matrix R;
    if(A.column==B.row)
    {
        R.row = A.row;
        R.column = B.column;
        for(int i=0;i<R.row;i++)
        {
            for(int j=0;j< R.column;j++)
            {
                int sum = 0;
                for(int k=0;k <A.column;k++)
                {
                    sum+=(A.arr[i][k] * B.arr[k][j]);
                    sum %= mod;
                }
                R.arr[i][j] = sum;
            }
        }
    }
    return R;
}

Matrix Power(Matrix mat, int p, int mod)
{
    if(p==1) return mat;
    if(p%2==1)
    {
        return Multiply(mat,Power(mat,p-1,mod),mod);
    }
    Matrix ret = Power(mat,p/2,mod);
    ret = Multiply(ret,ret,mod);
    return ret;
}

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        int a,b,n,m,i,j,mod;
        cin>>a>>b>>n>>m;
        mod = pow(10.0,m);
        Matrix fib;
        fib.row = fib.column = 2;
        fib.arr[0][0] = fib.arr[1][0] = fib.arr[0][1] = 1;
        fib.arr[1][1]= 0;
        if(n<3)
        {
            if(n==0) cout<<a<<endl;
            if(n==1) cout<<b<<endl;
            if(n==2) cout<<(a+b)%mod<<endl;
        }
        else
        {
            fib = Power(fib,n-1,mod);
            int ans = b*fib.arr[0][0]+a*fib.arr[0][1];
            ans%=mod;
            cout<<ans<<endl;
        }

    }
    return 0;
}
