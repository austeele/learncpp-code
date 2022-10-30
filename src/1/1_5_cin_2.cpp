#include <iostream>  // for std::cout and std::cin

int main()
{
    std::cout << "Enter two numbers separated by a space, then a string: ";

    int x{ }; // define variable x to hold user input (and zero-initialize it)
    int y{ }; // define variable y to hold user input (and zero-initialize it)
    std::string z;
    std::cin >> x >> y >> z; // get two numbers and store in variable x and y respectively
                             // also get string z

    std::cout << "You entered " << x << " and " << y << ", followed by " << z << ".\n";

    return 0;
}