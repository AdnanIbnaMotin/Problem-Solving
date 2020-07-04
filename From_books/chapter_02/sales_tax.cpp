// Write a program that will compute the total tax on a $95 purchase. Assume the state sales tax is 4 percent, and the country saltes tax is 2 percent


#include <iostream>

int main(int argc, char* argv[])
{
	float purchase = 95.0f;
	float salesTax = 0.04f;

	float countryTax = 0.02f;

	float totalTax = (purchase * salesTax) + (purchase * countryTax);

	std::cout << totalTax << std::endl;

	return 0;
}
