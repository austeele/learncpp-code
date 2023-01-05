#include <iostream>

// Ask user to enter single character and print the value of the character
// and its ASCII code using static_cast.
int main()
{
    std::cout << "Enter a single character: ";
    char mychar{};
    std::cin >> mychar;

    std::cout << "You entered '" << mychar << "', which has ASCII code "
        << static_cast<int>(mychar) << ".\n";

    return 0;
}