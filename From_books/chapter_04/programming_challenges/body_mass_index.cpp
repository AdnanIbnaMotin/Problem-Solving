/*
Write a program that calculates and displays a person's body mass index (BMI). The BMI is often used to determine whether a person is
overweight or underweight for his or her height. A person's BMI is calculated with the following formula:

    BMI = weight * 703 / height^2

where weight is measured in pounds and height is measured in inches. The program should display a message indicating whether the person
has optimal weight, is underweight, or is overweight. A person's weight is considered to be optimal if his or her BMI is between 18.5 and
25. If the BMI is less than 18.5, the person is considered to be underweight. If the BMI value is greater than 25, the person is considered
to be overweight.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char* argv[])
{
    float weight = 0, height = 0;

    float BMI = 0;

    std::cout << "Enter your weight (in pounds): ";
    std::cin >> weight;

    std::cout << "Enter your height (in inches): ";
    std::cin >> height;

    BMI = weight * 703 / pow(height, 2);

    std::cout << std::fixed << std::setprecision(1) << std::endl;
    std::cout << "Your body mass index is: " << BMI << std::endl;

    if (BMI >= 18.5 && BMI <= 25)
    {
        std::cout << "The person has optimal weight." << std::endl;
    }
    else if (BMI < 18.5)
    {
        std::cout << "The person is underweight." << std::endl;
    }
    else if (BMI > 25)
    {
        std::cout << "The person is overweight." << std::endl;
    }

    return 0;
}
