#include <iostream>
#include <algorithm>
#include <iterator>

int main()
{
    // Ask user how many names they want to enter
    std::cout << "How many names would you like to enter? ";
    int num_names{};
    std::cin >> num_names;

    // Dynamically allocate std::string array
    std::string* str_array{ new std::string[num_names] };

    // Ask user to enter each name
    for ( int i = 0; i < num_names; i++ )
    {
        std::cout << "Enter name #" << i << ": ";
        std::cin >> str_array[i];
    }

    // Print list of names
    std::cout << "Here is your list: " << "\n";

    for ( int i = 0; i < num_names; i++ )
    {
        std::cout << "Name #" << i << ": " << str_array[i] << "\n";
    }

    return 0;
}