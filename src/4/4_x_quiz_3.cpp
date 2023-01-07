#include <iostream>

double getDouble()
{
    std::cout << "Enter a double value: ";
    double d {};
    std::cin >> d;
    return d; 
}

char getOperator()
{
    std::cout << "Enter one of the following: +, -, *, or /: ";
    char op {};
    std::cin >> op;
    return op; 
}

void calcAndPrint(double d1, double d2, char op)
{
    double result {};

    if (op == '+') { result = d1 + d2; }
    else if (op == '-') { result = d1 - d2; }
    else if (op == '*') { result = d1 * d2; }
    else if (op == '/') { result = d1 / d2; }
    else return;

    std::cout << d1 << " " << op << " " << d2 << " is " << result << "\n"; 

}

int main()
{
    double d1 { getDouble() };
    double d2 { getDouble() };

    char op { getOperator() };

    calcAndPrint(d1, d2, op);

    return 0;
}