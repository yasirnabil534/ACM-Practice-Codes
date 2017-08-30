/**UVA 483: Word scramble, problem in line 21*/
#include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

int main()
{
    string full;
    while(getline(cin,full))
    {
        int c=0,i,j,n;
        stringstream S(full);
        vector <string> word;
        char ch;
        for(i=0,c=0;S>>full;i++,c++)
        {
            word.push_back(S);   /// word[i] = S;
            n = word[i].length();
            for(j=0;j<=n/2;j++)
            {
                ch = word[i][j];
                word[i][j] = word[i][n-j];
                word[i][n-j] = ch;
            }
        }
        for(i=0;i<c;i++)
        {
            if(i<c-1)
                cout<<word[i]<<" ";
            else
                cout<<word[i]<<endl;
        }
    }
    return 0;
}
