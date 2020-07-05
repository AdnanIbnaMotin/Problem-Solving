/*
Create a change-counting game that gets the user to enter the number of coins required to make exactly one dollar.
The program should ask the user to enter the number of pennies, nickels, dimes, and quarters. If the total value of the
coins entered is equal to one dollar, the program should congratulate the user for winning the game. Otherwise, the
program should display a message indicating whether the amount entered was more than or less than one dollar.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int pennies = 0,
        nickels = 0,
        dimes = 0,
        quarters = 0;

    std::cout << "Number of pennies: ";
    std::cin >> pennies;

    std::cout << "Number of nickels: ";
    std::cin >> nickels;

    std::cout << "Number of dimes: ";
    std::cin >> dimes;

    std::cout << "Number of quarters: ";
    std::cin >> quarters;

    float total = (pennies + (nickels * 5) + (dimes * 10) + (quarters * 25)) / 100;

    if (total == 1)
    {
        std::cout << "Congratulate" << std::endl;
    }
    else if (total > 1)
    {
        std::cout << "The amount is more than one dollar" << std::endl;
    }
    else if (total < 1)
    {
        std::cout << "The amount is less than one dollar" << std::endl;
    }
    return 0;
}
