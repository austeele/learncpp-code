#include <cstdint>
#include <iostream>

int main()
{
    std::int8_t myint{65};
    std::cout << static_cast<int>(myint); // will always print 65

    return 0;
}