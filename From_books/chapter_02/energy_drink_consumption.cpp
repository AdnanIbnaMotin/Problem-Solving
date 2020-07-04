/*
 * A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent
 * of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy
 * drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that
 * displays the following:
 *
 * The approximate number of customers in the survey who purchase one or more energy drink per week
 * The approximate number of customers in the survey who prefer citrus-flavored energy drinks.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{

	std::cout << std::fixed << std::setprecision(0);
	std::cout << "The approximate number of customers in the survey who purchase one or more energy drink per week is: " << (16'500 * 0.15) << std::endl;
	
	std::cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks is: " << (16'500 * 0.15 * 0.58) << std::endl;

	return 0;
}
