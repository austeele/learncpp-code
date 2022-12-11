#include <iostream>
#define DEBUG

void printValue(int value)
{
    std::cout << value;
}

int main()
{
#ifdef DEBUG
    std::cout << std::unitbuf; // enable automatic flushing for std::cout (for debugging)
#endif
    printValue(5);
    printValue(6);
    printValue(7);

    return 0;
}