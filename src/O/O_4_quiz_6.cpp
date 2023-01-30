#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Input a number between 0 and 255: ";
    int num;
    std::cin >> num;

    int bitPosition {7};
    std::string binBits;
    while (bitPosition >= 0)
    {
        if (num >= std::pow(2, bitPosition))
        {
            num -= std::pow(2, bitPosition);
            binBits += "1";
        }
        else
        {
            binBits += "0";
        }

        bitPosition--;
    }
    std::cout << "binBits: " << binBits << "\n";
}