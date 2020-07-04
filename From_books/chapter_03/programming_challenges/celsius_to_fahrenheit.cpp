/*
Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is

F = (9/5) * C + 32
F is the Fahrenheit temperature, and C is the Celsius temperature.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float celTemp = 0.0f;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celTemp;

    float convertToF = (9/5) * celTemp + 32;

    std::cout << "Temperature in Fahrenheit: " << convertToF << "'F" << std::endl;

    return 0;
}
