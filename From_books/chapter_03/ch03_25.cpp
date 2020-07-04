/*
 * A retail score grants its customers a maximum amount of 1:rcdit. Each customer's
 * available credit is his or her maximum amount of credit miniJS the amount of credit
 * used. Write a program that asks for a customer's maximum amount of credit and amount of credit used.
 * The program should then display the customer's available credit.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float maximumCredit = 0;
    float creditUsed = 0;


    std::cout << "What is your maximum credit: ";
    std::cin >> maximumCredit;

    std::cout << "How much credit you used: ";
    std::cin >> creditUsed;

    if (maximumCredit < creditUsed)
    {
        std::cout << "Please enter valid info..." << std::endl;
        return 0;
    }
    std::cout << "Available credit: " << (maximumCredit - creditUsed) << std::endl;
    return 0;
}
