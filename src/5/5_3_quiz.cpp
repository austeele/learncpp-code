#include <iostream>

bool isEven(int input)
{
    return ((input % 2) == 0);
}

int main()
{
    std::cout << "Enter an integer: ";
    int input {};
    std::cin >> input;

    if (isEven(input))
    {
        std::cout << input << " is even\n";
    }
    else
    {
        std::cout << input << " is odd\n";
    }

    return 0;
}