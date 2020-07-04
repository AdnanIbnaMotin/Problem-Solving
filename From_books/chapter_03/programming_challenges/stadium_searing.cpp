/*
There are three seating categories at a stadium. For a softball game, Class A seats cost
$15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how
many tickers for each class of seats were sold, Then displays the amount of income generated
from ticket sales. Format your dollar amount in fixed-point notation, with two
decimal places of precision, always display
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float cls[] = {15, 12, 9};
    int tickets = 0;
    float total = 0.0f;

    for (auto i: {'A', 'B', 'C'})
    {
        std::cout << "Enter the number of tickets for class " << i << " sold: ";
        std::cin >> tickets;
        total += (tickets * cls[i - 'A']);
    }

    std::cout << std::fixed << std::setprecision(2) << std::showpoint;
    std::cout << "The amount of income generated from ticket sales: $" << total << std::endl;
}
