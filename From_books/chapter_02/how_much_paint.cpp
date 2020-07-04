/*
 * A particular brand of paid covers 340 square feet per gallon. Write a program to determine and report approximately how many
 * gallons of paint will be need to paid two coats on a wooden fence that is 6 feet high and 100 feet long.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	std::cout << std::fixed << std::setprecision(0);
	std::cout << "To paint two coats on a wooden fence that is 6 feet high and 100 feet long we need: " << (2*6*100) / 340.0f << " gallons of paint" << std::endl;
	return 0;
}
