#include <cstdint>
#include <iostream>

// Because std::int8_t is treated like a char, the input routines treat
// our input as a sequence of characters, not as an integer. If you enter
// 35 as input, that's two chars: '3' and '5'. The char can only hold one
// object, so the '3' is extracted and the '5' is left in the input steam.
// Because '3' has ASCII code point 51, that's what gets stored to myint,
// which later is printed as an int.
int main()
{
    std::cout << "Enter a number between 0 and 255: ";
    std::int8_t myint{};
    std::cin >> myint;

    std::cout << "You entered: " << static_cast<int>(myint);

    return 0;
}