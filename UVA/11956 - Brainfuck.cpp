#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,T;
    cin>>T;
    for(t=1;t<=T;t++)
    {
        string str;
        int ar[101],pointer = 0,i=0;
        memset(ar,0,sizeof(ar));
        cin>>str;
        printf("Case %d:",t);
        while(i<str.length())
        {
            if(str[i]=='>') pointer++;
            else if(str[i]=='<') pointer--;
            else if(str[i]=='+') {ar[pointer]++; if(ar[pointer]==256) ar[pointer]=0;}
            else if(str[i]=='-') {ar[pointer]--; if(ar[pointer]==-1) ar[pointer]=255;}
            if(pointer==100) pointer=0;
            else if(pointer==-1) pointer = 99;
            i++;
            //printf(" %02X",ar[pointer]);
        }
        for (int i = 0; i < 100; ++i)
            printf(" %02X", ar[i]);
        printf("\n");
    }
    return 0;
}
