#include <iostream>

// Ask user to enter single character and print the value of the character
// and its ASCII code using implicit type conversion.
int main()
{
    std::cout << "Enter a single character: ";
    char mychar{};
    std::cin >> mychar;
    int myint{mychar};

    std::cout << "You entered '" << mychar << "', which has ASCII code "
        << myint << ".\n";

    return 0;
}