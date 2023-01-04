#include <iostream>

// only works on input 0-9
bool isPrimeDigit(int x)
{
    return ((x == 2) ||( x == 3)|| (x == 5)|| (x == 7));
}

int main()
{
    std::cout << "Enter an integer from 0 through 9 (inclusive): ";
    int x {};
    std::cin >> x;

    if (isPrimeDigit(x))
        std::cout << "The digit is prime\n";
    else
        std::cout << "The digit is not prime\n";

    return 0;
}