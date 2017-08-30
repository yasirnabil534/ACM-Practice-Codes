#include<cstdio>

///First try these 2 test case in your code, then see my code.
///29486 25640 0.1 (To avoid wrong answer) ANS: 5 4
///89 144 .00000001 (To avoid TLE) ANS: 429281 694567

int main(){
    long long int a,b,c,d;
    double pr;
    while(scanf("%lld %lld",&a,&b)!=EOF){
        scanf("%lf",&pr);
        long double chk = (long double)a/b,chk2;
        for(d=1;;d++){
            c = (long long)(chk*d);
            while((a*d)>=(b*c))
                c++;
            chk2 = (long double)c/d;
            if((chk2-chk)<=pr){
                printf("%lld %lld\n",c,d);
                break;
            }
        }
    }
    return 0;
}
