/*
Joe's Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into.
The program should perform the following steps:

    A) Ask the user for the diameter of the pizza in inches.
    B) Calculate the number of slices that may be taken from a pizza of that size.
    C) Display a message telling the number of slices.

To calculate the number of slices that may be taken from the pizza, you must know
the following facts:

    Each slice should have an area of 14.125 inches.
    To calculate the number of slices, simply divide the area of the pizza by 14.125.
    The area of the pizza is calculated with chis formula:

Area= pi * r^2

Note: pi = 3.14159 can be used as its value. The variable r is the radius of the pizza. Divide the diameter by 2 to
get the radius.

Make sure the output of the program displays the number of slices in fixed-point notation, rounded to one decimal place of
precision. Use a named constant for pi.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float sliceArea = 14.125f;
    const float PI = 3.141519f;

    float diameterOfPizza = 0;

    std::cout << "Diameter of the pizza: ";
    std::cin >> diameterOfPizza;

    float r = diameterOfPizza / 2.0;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "Number of slices from a " << diameterOfPizza << " inches pizza you will get: " << (PI * r * r) / sliceArea << std::endl;

    return 0;
}
