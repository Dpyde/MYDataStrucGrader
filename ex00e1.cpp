#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

int main()
{
    int input2, input3;
    int hour, minutes;

    std::cin >> hour >> input2;
    std::cin >> input3;
    minutes = input3 + input2;
    hour += minutes / 60;
    minutes %= 60;
    hour %= 24;

    std::cout << std::setw(2) << std::setfill('0') << hour << " ";
    std::cout << std::setw(2) << std::setfill('0') << minutes;

    // std::cout<<input<<input2<<input3;
}
