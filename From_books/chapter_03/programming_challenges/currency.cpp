/*
Write a program that will convert U.S. dollar amounts to Japanese yen and to euros,
storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR. To get
the most up-to-dare exchange rates, search the Internet using the term "currency exchange rare".
If you cannot find the most recent exchange rates, use the following:

1 Dollar = 107.52 Yen
1 Dollar = 0.89 Euros

Format your currency amounts in fixed-point notation, with two decimal places of
precision, and be sure the decimal point is always displayed.
*/
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{

    float dollarAmount = 0;

    std::cout << "Enter the amount of money in dollar: ";
    std::cin >> dollarAmount;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "$" << dollarAmount << " dollar = " << dollarAmount * 107.52f << " Yen" << std::endl;
    std::cout << "$" << dollarAmount << " dollar = " << dollarAmount * 0.89f << " Euros" << std::endl;

    return 0;
}
