/*
Write a program that asks for five test scores. The program should calculate the average
test score and display it. The number displayed should be formated in fixed-point
notation, with one decimal point of precision.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float ts = 0;
    float total = 0;
    for (int i=1; i<=5; i++)
    {
        std::cout << "Enter test score " << i << ": ";
        std::cin>> ts;
        total += ts;
    }

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Average test score: " << total/5 << std::endl;

    return 0;
}
