/*
 * An electronics company sells circuit boards at a 35 percent profit. Write a program that will 
 * calculate the selling price of a circuit board that costs $14.95. Display the result on the 
 * screen
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	float actualPrice = 14.95;
	float profit = 14.95 * 0.35;

	float sellingPrice = actualPrice + profit;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The selling price of a circuit board: $" << sellingPrice << std::endl;


	return 0;
}
