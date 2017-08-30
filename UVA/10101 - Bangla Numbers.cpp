#include<bits/stdc++.h>

using namespace std;

void func(string st,int pos=0)
{
    int x = st.length();
    if(x<=9)
    {
        reverse(st.begin(),st.end());
        if(x==9) if(st[8]!='0') {if(pos==11)cout<<' ';cout<<st[8];pos=8;}
        if(x>8) if((st[7]!='0')||(st[8]!='0')) {if(pos==11)cout<<' ';cout<<st[7]<<" kuti";pos=7;}
        if(x==8) if((st[7]!='0')) {if(pos==11)cout<<' ';cout<<st[7]<<" kuti";pos=7;}
        if(x>=7) if(st[6]!='0') {if(pos==7||pos==11)cout<<' ';cout<<st[6];pos=6;}
        if(x>6) if((st[5]!='0')||(st[6]!='0')) {if(pos==7||pos==11)cout<<' ';cout<<st[5]<<" lakh";pos=5;}
        if(x==6) if((st[5]!='0')) {if(pos==7||pos==11)cout<<' ';cout<<st[5]<<" lakh";pos=5;}
        if(x>=5) if((st[4]!='0')) {if(pos==5||pos==11||pos==7)cout<<' ';cout<<st[4];pos=4;}
        if(x>4) if((st[4]!='0')||(st[3]!='0')) {if(pos==5||pos==7||pos==11)cout<<' ';cout<<st[3]<<" hajar";pos=3;}
        if(x==4) if((st[3]!='0')) {if(pos==5||pos==7||pos==11)cout<<' ';cout<<st[3]<<" hajar";pos=3;}
        if(x>=3) if(st[2]!='0') {if(pos==7||pos==3||pos==5||pos==11)cout<<' ';cout<<st[2]<<" shata";pos=2;}
        if(x>=2) if(st[1]!='0') {if(pos==7||pos==5||pos==3||pos==2||pos==11)cout<<' ';cout<<st[1];pos=1;}
        if(((x>=1)&&(st[0]!='0'))||(st[0]=='0'&&pos==0)||st[1]!='0') {if(pos==7||pos==5||pos==3||pos==2||pos==11)cout<<' ';cout<<st[0];pos=0;}
    }
    else
    {
        int y = x - 7;
        string st1, st2;
        st1 = st.substr(0,y);
        st2 = st.substr(y,7);
        func(st1);
        cout<<" kuti";
        func(st2,11);
    }
}

int main()
{
    int t,T;
    string str;
    for(t=1;cin>>str;t++)
    {
        printf("%4d. ",t);
        func(str);
        cout<<endl;
    }
    return 0;
}
