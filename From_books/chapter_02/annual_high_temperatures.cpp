/*
 * The average July high temperature is 85 degress Fahrenheit in New York City, 88 degress Fahrenheit in Denver, and 106 degrees
 * Fahrenheit in Phoenix. Write a program that calculates and reports what the new average July high temperature would be for
 * each of these cities if temperatures rise by 2 percent.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	float newYork_Temp = 85 + (85 * 0.02);
	float denver_Temp = 88 + (88 * 0.02);
	float phoenix_Temp = 106 + (106 * 0.02);

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "New York average july high temperature is: " << newYork_Temp << "'F" << std::endl;
	std::cout << "Denver average july high temperature is: " << denver_Temp << "'F" << std::endl;
	std::cout << "Phoenix average july high temperature is: " << phoenix_Temp << "'F" << std::endl;

	return 0;

}
