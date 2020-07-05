/*
Write a program that ask the user to enter two numbers. The program should use the conditional operator to determine
which number is the smaller and which is the larger.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float num1 = 0, num2 = 0;

    std::cout << "Enter number one: ";
    std::cin >> num1;

    std::cout << "Enter number two: ";
    std::cin >> num2;

    if (num1 < num2)
    {
        std::cout << num1 << " is smaller number" << std::endl;
        std::cout << num2 << " is larger number" << std::endl;
    }
    if (num1 > num2)
    {
        std::cout << num2 << " is smaller number" << std::endl;
        std::cout << num1 << " is larger number" << std::endl;
    }

    return 0;
}
