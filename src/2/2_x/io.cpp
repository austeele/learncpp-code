// Get and return a single integer from the user
int readNumber()
{
    std::cout << "Enter an integer: ";
    int num {};
    std::cin >> num;
    return num;
}

// Output the answer
void writeAnswer(int answer)
{
    std::cout << "The result is: " << answer;
}