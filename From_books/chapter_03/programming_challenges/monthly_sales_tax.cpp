/*
A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected.
Write a program that asks for the month, the year, and the total amount collected at the cash register (i.e. sales plus sales tax).
Assume the state sales tax is 4 percent, and the county sales tax is 2 percent. If the total amount collected is known and the
total sales tax is 6 percent, the amount of product sales may be calculated as:

    S = T / 1.06

S is the product sales and T is the total income (product sales plus sales tax). T he program should display a report similar to:

    Month : October
    ------------------
    Total Collected:    $26572.89
    Sales:              $25068.76
    County Sales Tax:   $501.38
    State Sales Tax:    $1002.75
    Total Sales Tax:    $1504.13
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float T = 0, S = 0;
    std::string month = "", year = "";

    std::cout << "Enter the month on which the sales tax is collected: ";
    std::cin >> month;
    std::cout << "Enter the year on which the sales tax is collected: ";
    std::cin >> year;

    std::cout << "Enter the total amount tax collected: ";
    std::cin >> T;

    S = T / 1.06;

    float totalSalesTax = T - S;
    float countrySalesTax = (totalSalesTax * 0.02) / 0.06;
    float stateSalesTax = (totalSalesTax * 0.04) / 0.06;

    std::cout << std::fixed << std::setprecision(2) << std::endl;
    std::cout << "Month : " << month << std::endl;
    std::cout << "-----------------------" << std::endl;

    std::cout << "Total Collected: $" << T << std::endl;
    std::cout << "Sales: $" << S << std::endl;
    std::cout << "Country Sales Tax: $" << countrySalesTax << std::endl;
    std::cout << "State Sales Tax: $" << stateSalesTax << std::endl;
    std::cout << "Total Sales Tax: $" << totalSalesTax << std::endl;

    return 0;
}
