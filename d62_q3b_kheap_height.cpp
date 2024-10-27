#include <iostream>

int main(int argc, char const *argv[])
{
    long long n;
    int k, h;
    std::cin >> n >> k;
    if (k == 1)
    {
        std::cout << n - 1;
    }
    else
    {
        while (n != 1)
        {
            n -= 2;
            n /= k;
            n += 1;
            h++;
        }
        std::cout << h;
    }
}
