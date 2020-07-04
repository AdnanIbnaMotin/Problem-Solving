/*
 * Assuming the ocean's level is currently rising ac about 1.5 millimeters per year, write
 * a program that displays:
 *
 * The number of millimeters higher than the current level that the ocean's level will 
 * be in 5 years.
 *
 * The number of millimeters higher than the current level that the ocean's level will
 * be in 7 years.
 *
 * The number of millimeters higher than the current level that the ocean's level will
 * be in 10 years.
*/

#include <iostream>

int main(int argc, char* argv[])
{ 
	float oceanRisingLevelPerYear = 1.5f; // in millimeters

	std::cout << "After 5 years ocean Rising level will be: " << 5 * oceanRisingLevelPerYear  << " millimeters." << std::endl;

	std::cout << "After 7 years ocean Rising level will be: " << 7 * oceanRisingLevelPerYear << " millimeters." << std::endl;

	std::cout << "After 10 years ocean Rising level will be: " << 10 * oceanRisingLevelPerYear << " millimeters." << std::endl;

	return 0;
}
