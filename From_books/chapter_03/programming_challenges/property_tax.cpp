/*
A county collects property taxes on the assessment value of property, which is 60 percent of the property's actual value.
If an acre of land is valued at $10,000, its assessment value is $6,000. The property tax is then 75¢ for each $100 of the
assessment value. The tax for the acre assessed at $6,000 will be $45. Write a program that asks for the actual value of a
piece of property, then displays t he assessment value and property tax.
*/
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float priceOfProperty = 0;

    std::cout << "Enter the price of the property: ";
    std::cin >> priceOfProperty;

    float propertyAsTax = priceOfProperty * 0.60;

    std::cout << std::fixed << std::setprecision(2) << std::endl;
    std::cout << "The assessment value of property: $" << propertyAsTax << std::endl;
    std::cout << "Property tax: $" << (propertyAsTax * 0.75) / 100 << std::endl;

    return 0;
}
