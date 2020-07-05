/*
Write a program that asks the user to enter a number within the range of 1 through 10. Use switch statement to
display the Roman numeral version of that number.

Input Validation: Do not accept a number less than 1 or greater than 10
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int num = 0;

    std::cout << "Enter number: ";
    std::cin >> num;

    std::cout << "Roman numeral version of that number is: ";
    switch (num)
    {

    case 1:
        std::cout << "i" << std::endl;
        break;
    case 2:
        std::cout << "ii" << std::endl;
        break;
    case 3:
        std::cout << "iii" << std::endl;
        break;
    case 4:
        std::cout << "iv" << std::endl;
        break;
    case 5:
        std::cout << "v" << std::endl;
        break;
    case 6:
        std::cout << "vi" << std::endl;
        break;
    case 7:
        std::cout << "vii" << std::endl;
        break;
    case 8:
        std::cout << "viii" << std::endl;
        break;
    case 9:
        std::cout << "ix" << std::endl;
        break;
    case 10:
        std::cout << "x" << std::endl;
        break;
    default:
        std::cout << "Please enter between 1 to 10" << std::endl;
        break;

    }
    return 0;
}
