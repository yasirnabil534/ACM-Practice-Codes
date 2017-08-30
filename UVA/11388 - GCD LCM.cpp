#include<iostream>

int main()
{
    int T;
    std::cin>>T;
    for(int t=1;t<=T;t++)
    {
        long long int a,b;
        std::cin>>a>>b;
        if(a==0&&b!=0)
            std::cout<<"-1\n";
        else if((a==0&&b==0)||b%a==0)
            std::cout<<a<<" "<<b<<std::endl;
        else
            std::cout<<"-1\n";
    }
    return 0;
}
