#include <iostream>

int main()
{
    int* ptr{ new int{} }; // dynamically allocate integer
    int* otherPtr{ ptr }; // otherPtr now pointing at same memory location

    delete ptr; // return mem to OS. ptr and otherPtr now both dangling pointers.
    ptr = nullptr; // ptr now a nullptr, but otherPtr is still dangling!

    return 0;

    // Lessons learned:
    // 1. Avoid multiple pointers pointing to same piece of dynamic memory
    // 2. When deleting ptr, if ptr not immediately going out of scope, set to nullptr

}