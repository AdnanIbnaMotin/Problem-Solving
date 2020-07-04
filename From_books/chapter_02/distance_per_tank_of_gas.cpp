/*
 * A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town and 28.9 miles per
 * gallon when driven on the highway. Write a program that calculates and displays the distance the car
 * can travel on on tank of gas when driven in town and when driven on the highway.
*/

#include <iostream>

int main(int argc, char* argv[])
{
	float gallonOfGas = 20.0f;
	float twnAvgMiles = 23.5f;

	float hghAvgMiles = 28.9f;

	std::cout << "Distance the car can travel in town: " << gallonOfGas * twnAvgMiles << std::endl;
	std::cout << "Distance the car can travel in highway: " << gallonOfGas * hghAvgMiles << std::endl;

	return 0;
}
