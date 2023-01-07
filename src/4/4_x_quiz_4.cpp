#include <iostream>

double getTowerHeight()
{
    std::cout << "Enter the height of the tower in meters: ";
    double height {};
    std::cin >> height;
    return height;
}

double getPosition(double height, int timeInSeconds)
{
    constexpr double gravityConstant { 9.8 };
    return height - gravityConstant * timeInSeconds * timeInSeconds / 2;
}

int main()
{
    double height { getTowerHeight() };

    for (int sec = 0; sec < 6; sec++)
    {
        double position { getPosition(height, sec) };
        std::cout << "At " << sec << " seconds, the ball is ";
        if (position > 0)
        {
            std::cout << "at height: " << position << " meters\n";
        }
        else
        {
            std::cout << "on the ground.\n";
        }
    }

    return 0;
}