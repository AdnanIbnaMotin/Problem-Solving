// Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67
// meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent
// of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill
// on the screen


#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	float mealCharge = 88.67f;
	float tax = (88.67 * 6.75) / 100.0; 
	

	float tip = (mealCharge + tax) * 0.20;
	float totalBill = mealCharge + tax + tip;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "Meal Cost: $" << mealCharge << std::endl;
	std::cout << "Tax Amount: $" << tax << std::endl;
	std::cout << "Tip Amount: $" << tip << std::endl;
	std::cout << "Total Bill: $" << totalBill << std::endl;

	return 0;

}
