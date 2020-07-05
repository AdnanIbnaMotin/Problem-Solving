/*

Madison County provides a $5,000 homeowner exemption for its senior citizens. For example, if a senior's house is valued at $158,000, its assessed
value would be $94,800, as explained above. However, he would only pay tax on $89,800. At last year's tax rate of $2.64 for each $100 of assessed
value, the property tax would be $2,370.72. In addition co the tax break, senior citizens are allowed co pay their property tax in four equal payments.
The quarterly payment due on this property would be $592.68. Write a program chat asks the user co input the actual value of a piece of property and
the current tax race for each $100 of assessed value. The program should then calculate and report how much annual property tax a senior homeowner
will be charged for this property, and what he quarterly tax bill will be.

*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float exptn = 5'000;
    float houseVal = 1'58'000;
    float assessedVal = 94'800;

    float actualPropertyVal = 0;
    float taxRate = 0;

    std::cout << "Enter the actual value of the property: ";
    std::cin >> actualPropertyVal;

    std::cout << "Enter Current tax rate for each $100 of assessed value: ";
    std::cin >> taxRate;

    float payTax = ((actualPropertyVal * assessedVal) / houseVal ) - exptn;
    float propertyTax = (payTax * taxRate) / 100;

    float quaterlyPayTax = propertyTax / 4;

    std::cout << std::fixed << std::setprecision(2) << std::endl;
    std::cout << "Annual property tax a senior homeowner will be charged: $" << propertyTax << std::endl;
    std::cout << "Quarterly tax bill will be: $" << quaterlyPayTax << std::endl;


    return 0;
}
