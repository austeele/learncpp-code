#include <algorithm> // std::max
#include <cmath> // std::abs
#include <iostream>

// return true if the difference between a and b is less than absEpsilon, or within relEpsilon percent of the larger of a and b
bool approximatelyEqualAbsRel(double a, double b, double absEpsilon, double relEpsilon)
{
    // Check if the numbers are really close -- needed when comparing numbers near zero.
    double diff{ std::abs(a - b) };
    if (diff <= absEpsilon)
        return true;

    // Otherwise fall back to Knuth's algorithm
    return (diff <= (std::max(std::abs(a), std::abs(b)) * relEpsilon));
}

int main()
{
    double y {1.0001};
    double x {1.0};
    double epsilon {0.0001};
    double epsilonPercent {0.01};

    if (approximatelyEqualAbsRel(y, x, epsilon, epsilonPercent))
    {
        std::cout << "y and x are equal";
    }
    else
    {
        std::cout << "y and x are not equal";
    }

    return 0;
}