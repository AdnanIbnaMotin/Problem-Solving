/*
A cookie recipe calls for the following ingredients:

1.5 cups of sugar
1 cup of butter
2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. Write a program
that asks the user how many cookies he or she wants to make, then displays the number
of cups of each ingredient needed for the specified number of cookies.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    int numberOfCookies = 0;

    std::cout << "Please enter how many cookies you wants to make: ";
    std::cin >> numberOfCookies;

    std::cout << std::endl << "The ingredients you need:" << std::endl;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << (1.5 * numberOfCookies) / 48.0 << " cups of sugar" << std::endl;
    std::cout << (1 * numberOfCookies) / 48.0 << " cup of butter" << std::endl;
    std::cout << (2.75 * numberOfCookies) / 48.0 << " cups of flour" << std::endl;

    return 0;
}
