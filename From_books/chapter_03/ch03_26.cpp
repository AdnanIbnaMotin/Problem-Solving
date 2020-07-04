/*
 * Write a program that calculates the total of a retail sale.
 * The program should ask for the amount of the sale and the sales tax rate. The sales
 * tax rate should be entered as a floating-point number. For example, if the sales tax
 * race is 6 percent, the user should enter 0.06. The program should display total amount
 * of sales tax and the total of the sale.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float amountOfSale = 0;
    float salesTax = 0;

    std::cout << "Please enter amount of sales: ";
    std::cin >> amountOfSale;

    std::cout << "Please enter tax rate in percentage: ";
    std::cin >> salesTax;

    std::cout << "Amout of sales tax: $" << amountOfSale * salesTax << std::endl;
    std::cout << "Total amount of sales: $" << amountOfSale + (amountOfSale * salesTax) << std::endl;

    return 0;
}
