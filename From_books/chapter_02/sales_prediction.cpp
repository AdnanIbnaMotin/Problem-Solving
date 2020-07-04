// The East Coast sales division of a company generates 58 percent of total sales. Based on that percentage,
// write a program that will predict how much the East Coast division will generate if the company has $8.6 million in sales this years.

#include <iostream>

int main(int argc, char* argv[])
{
	float totalSales = 0.58f; // On percentage

	float salesInOneYear = 8.5f; // In millions

	std::cout << "East Coast division will generate $" << (totalSales * salesInOneYear) << " millions" << std::endl;

	return 0;
}
