#include <iostream>

int main()
{
    std::cout << "Enter an integer: ";
    int firstNum {}; // firstNum start
    std::cin >> firstNum;

    std::cout << "Enter a larger integer: ";
    int largerNum {}; // largerNum start
    std::cin >> largerNum;

    std::cout << "Swapping the values\n";

    // Swap if user did it wrong
    if (largerNum < firstNum)
    {
        int temp; // temp start
        temp = firstNum;
        firstNum = largerNum;
        largerNum = temp;
    } // temp dies

    std::cout << "The smaller value is: " << firstNum << "\n";
    std::cout << "The larger value is: " << largerNum << "\n";

} // firstNum and largerNum die