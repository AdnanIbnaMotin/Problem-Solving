/*
 * A customer in a store is purchasing five items. The prices of the five items are as follows:
 * Price of item 1 = $15.96
 * Price of item 2 = $24.95
 * Price of item 3 = $6.95
 * Price of item 4 = $12.95
 * Price of item 5 = $3.95
 *
 * Write a program that holds the prices of the five items in five variables. Display each item's
 * price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax
 * is 7 percent.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	double itemOne = 15.96,
		   itemTwo = 24.95,
		   itemThree = 6.95,
		   itemFour = 12.95,
		   itemFive = 3.95;


	double subTotal = itemOne + itemTwo + itemThree + itemFour + itemFive;
	double tax = subTotal * 0.07;

	double total = subTotal + tax;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Item One: $" << itemOne << std::endl;
	std::cout << "Item Two: $" << itemTwo << std::endl;
	std::cout << "Item Three: $" << itemThree << std::endl;
	std::cout << "Item Four: $" << itemFour << std::endl;
	std::cout << "Item Five: $" << itemFive << std::endl;

	std::cout << std::endl;

	std::cout << "Sub Total: $" << subTotal << std::endl;
	std::cout << "Sales Tax: $" << tax << std::endl;
	std::cout << "Total: $" << total << std::endl;

	return 0;
}
