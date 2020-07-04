/*
Many financial experts advise that property owners should insure their homes or buildings for at least 80
percent of the amount it would cost to replace the structure. Write a program that asks the user to enter
the replacement cost of a building, then displays the minimum amount of insurance he or she should buy for
the property.
*/
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float replaceMentCost = 0;
    std::cout << "Enter the replacement cost of a building: ";
    std::cin >> replaceMentCost;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The minimum amount of insurance should buy for the property: $" << replaceMentCost * 0.80 << std::endl;
    return 0;
}
