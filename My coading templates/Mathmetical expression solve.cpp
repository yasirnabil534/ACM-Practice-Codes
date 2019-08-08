/// Solve of a given mathematical expression

map<char, int> M;

int main()
{
    M['-'] = 1;
    M['+'] = 1;
    M['*'] = 3;
    M['/'] = 4;
    M['#'] = 0;
    int t,T;
    scin(T);
    RUN_CASE(t,T)
    {
        string str,tmp;
        cin>>str;
        str+='#';
        tmp = "";
        stack<char> chr;
        stack<ll> num;
        str = "0" + str;
        stringstream ss;
        int n = (int)str.size();
        for(int i = 0; i < n; i++)
        {
            if(str[i]=='+'||str[i]=='-'||str[i]=='*'||str[i]=='/'||str[i]=='#')
            {
                ss<<tmp;
                ll x;
                ss>>x;
                tmp = "";
                ss.clear();
                if(chr.empty() || M[str[i]] > M[chr.top()])
                {
                    num.push(x);
                    chr.push((char)str[i]);
                }
                else
                {
                    while(!chr.empty() && M[str[i]] <= M[chr.top()])
                    {
                        ll y = num.top();
                        int z = M[chr.top()];
                        char ch = chr.top();
                        num.pop();
                        chr.pop();
                        if(ch=='-') y = y-x;
                        else if(ch=='+') y = y+x;
                        else if(ch=='*') y = x * y;
                        else if(ch=='/') y = y/x;
                        x = y;
                    }
                    num.push(x);
                    chr.push((char)str[i]);
                }
            }
            else tmp += ((char)str[i]);
        }
        CASE(t);
        printf("%lld\n",num.top());
    }
    return 0;
}
/**
3
10+2*3
100*2+500/10
10+20/2-5
*/
