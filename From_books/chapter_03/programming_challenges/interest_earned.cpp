/*
Assuming there are no deposits other than the original investment, the balance in a savings account after one year may
be calculated as

Amount = Principal * ( 1 + (Rate/T) )^T

Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest
is compounded during a year (T is 4 if the interest is compounded quarterly).

Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded.
It should display a report similar to:

    Interest Rate:      4.25%
    Times Compounded:   12
    Principal:          $1000.00
    Interest:           $43.34
    Amount in Savings:  $1043.34
*/

#include <iostream>
#include <iomanip>
#include <cmath>

int main(int argc, char* argv[])
{
    float interestRate = 0;
    int timeCompunded = 0;
    float principle = 0;

    std::cout << "Enter the interest rate (in percentage): ";
    std::cin >> interestRate;

    interestRate /= 100;

    std::cout << "Enter the number of time the interest is compounded: ";
    std::cin >> timeCompunded;

    std::cout << "Balance of the saving account: ";
    std::cin >> principle;

    float temp = 1 + ( interestRate / timeCompunded );

    float amount = principle * pow(temp, timeCompunded);

    std::cout << std::fixed << std::setprecision(2) << std::endl;
    std::cout << "Interest Rate: " << interestRate*100 << "%" << std::endl;
    std::cout << "Time compounded: " << timeCompunded << std::endl;
    std::cout << "Principal: " << "$" << principle << std::endl;
    std::cout << "Interest: $" << amount - principle << std::endl;
    std::cout << "Amount in savings $" << amount << std::endl;

    return 0;
}
