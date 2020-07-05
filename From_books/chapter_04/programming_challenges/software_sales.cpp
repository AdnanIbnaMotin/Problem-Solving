/*
A software company sells a package that retails for $99. Quantity discounts are given according to the following table

--------------------------
Quantity        Discount
--------------------------
10-19           20%
20-49           30%
50-99           40%
100 or more     50%
--------------------------

Write a program that asks for the number of units sold and computes the total cost of the purchase.
Input Validation: Make sure the number of units is greater than 0.

*/
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    int numberOfUnits = 0;
    int packagePrice = 99;

    std::cout << "Enter number of units: ";
    std::cin >> numberOfUnits;

    float discount = 0;
    float actualPrice = packagePrice * numberOfUnits;

    if (numberOfUnits < 0)
    {
        std::cout << "Number of quantity must be greater than 0" << std::endl;
    }
    else if (numberOfUnits >= 10 && numberOfUnits <= 19)
    {
        discount = 0.2;
    }
    else if (numberOfUnits >= 20 && numberOfUnits <= 49)
    {
        discount = 0.3;
    }
    else if (numberOfUnits >= 50 && numberOfUnits <= 99)
    {
        discount = 0.4;
    }
    else if (numberOfUnits >= 100)
    {
        discount = 0.5;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Total cost: $" << actualPrice - (discount * actualPrice) << std::endl;

    return 0;
}
