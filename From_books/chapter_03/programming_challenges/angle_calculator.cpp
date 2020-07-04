/*
Write a program that asks the user for an angle, entered in radians. T he program should then display the sine, cosine, and tangent
of the angle. (Use the sin, cos, and tan library functions to determine these values.) The output should be displayed in
fixed-point notation, rounded to four decimal places of precision.
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{
    float angle = 0;
    std::cout << "Please enter angle value in radians: ";
    std::cin >> angle;


    std::cout << std::fixed << std::setprecision(4);
    std::cout << "Sine value of: " << sin(angle) << std::endl;
    std::cout << "Cosine value of: " << cos(angle) << std::endl;
    std::cout << "Tangent value of: " << tan(angle) << std::endl;

    return 0;
}
