#include <iostream>

int main()
{
    int num { }; // Variable to store the input integer, zero-initialized

    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::cout << "Double that number is: " << num*2 << "\n";

    return 0;
}