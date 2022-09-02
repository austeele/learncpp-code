#include <iostream>

int main()
{
    int* ptr{ new int }; // dynamically allocate an integer
    *ptr = 7; // put an integer at that location

    std::cout << "Value we entered: " << *ptr << "\n"; // print the original value we just put in. Should be 7.

    delete ptr; // return memory to OS. ptr is now dangling pointer.

    std::cout << "Undefined, indirection through dangling pointer: " << *ptr << "\n"; // undefined behavior when using indirection through dangling pointer
    //delete ptr; // trying to delete memory again will also lead to undefined behavior
                // when running in VS code with WSL2 g++ compiler, this causes an error
    return 0;
}