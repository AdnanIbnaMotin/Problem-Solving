/*
The Fast Freight Shipping Company charges the following rates:
----------------------------------------------------------------------
Weight of Package (in Kilograms)            Rate per 500 Miles Shipped
----------------------------------------------------------------------
2 kg or less                                $1.10
Over 2 kg but not more than 6 kg            $2.20
Over 6 kg but not more than 10 kg           $3.70
Over 10 kg but not more than 20 kg          $4.80
----------------------------------------------------------------------

Write a program that asks for the weight of the package and the distance it is to be shipped, then display the charges.

Input Validation: do not accept values of 0 or less for the weight of the package.
Do not accept weights of more than 20 kg (this is the maximum weight the company will ship).
Do not accept distance of less than 10 miles or more than 3,000 miles.

These are the company's minimum and maximum shipping distances.
*/
#include <iostream>

int main(int argc, char* argv[])
{
    float weight = 0.0f, distance = 0.0f, rate = 0.0f;

    std::cout << "Enter the weight of the package: ";
    std::cin >> weight;

    std::cout << "Enter the distance it is to be shipped: ";
    std::cin >> distance;

    if (weight <= 0 || weight > 20)
    {
        std::cout << "Weight capacity between 1 to 20" << std::endl;
    }

    if (distance < 10 || distance > 3'000)
    {
        std::cout << "Distance limit in between 10 to 3,000" << std::endl;
    }
    else
    {
        if (weight <= 2)
        {
            rate = 1.10f;
        }
        else if (weight <= 6)
        {
            rate = 2.20f;
        }
        else if (weight <= 10)
        {
            rate = 3.70f;
        }
        else if (weight <= 20)
        {
            rate = 4.80f;
        }
    }

    rate = (rate * distance) / 500;
    std::cout << "Charges: $" << rate << std::endl;

    return 0;
}
