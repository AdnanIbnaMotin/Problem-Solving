/*
Write a program that calculates the average rainfall for three: months. The program
should ask the user to enter the name of each month, such as June or July, and the
amount of rain (in inches) that fell each month. The program should display a message
similar to the following:

The average rainfall for June, July, and August is 6.72 inches.
*/

#include <iostream>
#include <iomanip>
#include <array>

int main(int argc, char* argv[])
{
    std::cout << "The average rainfall for three months" << std::endl << std::endl;

    std::array<std::string, 3> months;
    float amountOfRain = 0; // In inches
    float total = 0;

    for (int i=0; i< months.size(); i++)
    {
        std::cout << "Enter the name of the month " << i+1 << ": ";
        std::cin >> months[i];

        std::cout << "Enter the amount of rain in inches: ";
        std::cin >> amountOfRain;
        total += amountOfRain;
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The average rainfall for " << months[0] << ", " << months[1] << ", and " << months[2] << " is " << total/3 << " inches." << std::endl;

    return 0;
}
