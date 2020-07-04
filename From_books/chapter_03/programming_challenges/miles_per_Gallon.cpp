/*
Write a program that calculates a car's gas mileage. The program should ask the user
to enter the number of gallons of gas the car can hold, and the number of miles it
can be driven on a full rank. It should then display the number of miles that may be
driven per gallon of gas.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float gasHold = 0;
    float milesCanDrive = 0;

    std::cout << "Enter the number of gallons of gas the car can hold: ";
    std::cin >> gasHold;

    std::cout << "Enter the number of miles it can be driven on a full tank: ";
    std::cin >> milesCanDrive;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Per gallon the car can be driven " << milesCanDrive / gasHold << " miles" << std::endl;
    return 0;
}
