#include <iostream>

int main(int argc, char const *argv[])
{
    int n,temp;
    std::cin>>n;
    temp=1;
    while (temp<n)
    {
        temp*=2;
    }
    std::cout<<temp-n;


    return 0;
}
