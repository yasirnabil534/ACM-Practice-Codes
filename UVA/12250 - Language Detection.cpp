#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    for(t=1;;t++)
    {
        string str;
        cin>>str;
        if (str=="#")
        {
            break;
        }
        else if (str=="HELLO")
        {
            cout<<"Case "<<t<<": ENGLISH\n";
        }
        else if (str=="HOLA")
        {
            cout<<"Case "<<t<<": SPANISH\n";
        }
        else if (str=="HALLO")
        {
            cout<<"Case "<<t<<": GERMAN\n";
        }
        else if (str=="BONJOUR")
        {
            cout<<"Case "<<t<<": FRENCH\n";
        }
        else if (str=="CIAO")
        {
            cout<<"Case "<<t<<": ITALIAN\n";
        }
        else if (str=="ZDRAVSTVUJTE")
        {
            cout<<"Case "<<t<<": RUSSIAN\n";
        }
        else
            cout<<"Case "<<t<<": UNKNOWN\n";
    }
    return 0;
}
