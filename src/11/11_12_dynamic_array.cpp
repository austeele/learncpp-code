#include <iostream>

int main()
{
    std::cout << "Enter a positive integer: ";
    int length{};
    std::cin >> length;

    // note the difference in syntax between array new (no [] after new) and array delete (delete[])

    int* array{ new int[length]{} }; // use array new. Length doesn't need to be constant.

    std::cout << "Just allocated array of length " << length << "\n";

    array[0] = 5; // set element 0 to 5

    delete[] array; // use array delete to deallocate array

    // don't need to set array to nullptr/0 here because it's going out of scope immediately after this

    return 0;
}