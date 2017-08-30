#include<bits/stdc++.h>

using namespace std;

struct Data
{
    int num;
    int king,queen,jack,ace;
    Data()
    {
        king=queen=jack=ace=num=0;
    }
};

int main()
{
    string st1,st;
    while(getline(cin,st1))
    {
        Data S1,H1,D1,C1;
        stringstream ss1(st1);
        while(ss1>>st)
        {
            if(st[0]=='A'&&st[1]=='S')
            {
                S1.ace = 1;
                S1.num++;
            }
            else if(st[0]=='A'&&st[1]=='H')
            {
                H1.ace = 1;
                H1.num++;
            }
            else if(st[0]=='A'&&st[1]=='D')
            {
                D1.ace = 1;
                D1.num++;
            }
            else if(st[0]=='A'&&st[1]=='C')
            {
                C1.ace = 1;
                C1.num++;
            }
            else if(st[0]=='K'&&st[1]=='S')
            {
                S1.king = 1;
                S1.num++;
            }
            else if(st[0]=='K'&&st[1]=='H')
            {
                H1.king = 1;
                H1.num++;
            }
            else if(st[0]=='K'&&st[1]=='D')
            {
                D1.king = 1;
                D1.num++;
            }
            else if(st[0]=='K'&&st[1]=='C')
            {
                C1.king = 1;
                C1.num++;
            }
            else if(st[0]=='Q'&&st[1]=='S')
            {
                S1.queen = 1;
                S1.num++;
            }
            else if(st[0]=='Q'&&st[1]=='H')
            {
                H1.queen = 1;
                H1.num++;
            }
            else if(st[0]=='Q'&&st[1]=='D')
            {
                D1.queen = 1;
                D1.num++;
            }
            else if(st[0]=='Q'&&st[1]=='C')
            {
                C1.queen = 1;
                C1.num++;
            }
            else if(st[0]=='J'&&st[1]=='S')
            {
                S1.jack = 1;
                S1.num++;
            }
            else if(st[0]=='J'&&st[1]=='H')
            {
                H1.jack = 1;
                H1.num++;
            }
            else if(st[0]=='J'&&st[1]=='D')
            {
                D1.jack = 1;
                D1.num++;
            }
            else if(st[0]=='J'&&st[1]=='C')
            {
                C1.jack = 1;
                C1.num++;
            }
            else if(st[1]=='S')
            {
                S1.num++;
            }
            else if(st[1]=='H')
            {
                H1.num++;
            }
            else if(st[1]=='D')
            {
                D1.num++;
            }
            else if(st[1]=='C')
            {
                C1.num++;
            }
        }
        int point=0,Sno=0,Hno=0,Dno=0,Cno=0,pno=0;
        if(S1.ace>0) point+=4;
        if(H1.ace>0) point+=4;
        if(C1.ace>0) point+=4;
        if(D1.ace>0) point+=4;
        if(S1.king>0) point+=3;
        if(H1.king>0) point+=3;
        if(D1.king>0) point+=3;
        if(C1.king>0) point+=3;
        if(S1.queen>0) point+=2;
        if(H1.queen>0) point+=2;
        if(D1.queen>0) point+=2;
        if(C1.queen>0) point+=2;
        if(S1.ace>0||(S1.king>0&&S1.num>1)||(S1.queen>0&&S1.num>2)) Sno = 1;
        if(H1.ace>0||(H1.king>0&&H1.num>1)||(H1.queen>0&&H1.num>2)) Hno = 1;
        if(D1.ace>0||(D1.king>0&&D1.num>1)||(D1.queen>0&&D1.num>2)) Dno = 1;
        if(C1.ace>0||(C1.king>0&&C1.num>1)||(C1.queen>0&&C1.num>2)) Cno = 1;
        if(S1.jack>0) point+=1;
        if(H1.jack>0) point+=1;
        if(D1.jack>0) point+=1;
        if(C1.jack>0) point+=1;
        if(S1.king>0&&S1.num<=1) point--;
        if(H1.king>0&&H1.num<=1) point--;
        if(D1.king>0&&D1.num<=1) point--;
        if(C1.king>0&&C1.num<=1) point--;
        if(S1.queen>0&&S1.num<=2) point--;
        if(H1.queen>0&&H1.num<=2) point--;
        if(D1.queen>0&&D1.num<=2) point--;
        if(C1.queen>0&&C1.num<=2) point--;
        if(S1.jack>0&&S1.num<=3) point--;
        if(H1.jack>0&&H1.num<=3) point--;
        if(D1.jack>0&&D1.num<=3) point--;
        if(C1.jack>0&&C1.num<=3) point--;
        pno = point;
        if(S1.num==2) point++;
        if(H1.num==2) point++;
        if(D1.num==2) point++;
        if(C1.num==2) point++;
        if(S1.num<=1) point+=2;
        if(H1.num<=1) point+=2;
        if(D1.num<=1) point+=2;
        if(C1.num<=1) point+=2;
        if(point<14) cout<<"PASS"<<endl;
        else
        {
            if(Sno==1&&Hno==1&&Dno==1&&Cno==1&&pno>15)
            {
                cout<<"BID NO-TRUMP"<<endl;
            }
            else
            {
                int Max = -1;
                char ch;
                if(S1.num>Max)
                {
                    Max = S1.num;
                    ch = 'S';
                }
                if(H1.num>Max)
                {
                    Max = H1.num;
                    ch = 'H';
                }
                if(D1.num>Max)
                {
                    Max = D1.num;
                    ch = 'D';
                }
                if(C1.num>Max)
                {
                    Max = C1.num;
                    ch = 'C';
                }
                cout<<"BID "<<ch<<endl;
            }

        }

    }
    return 0;
}

