/*
Write a program that asks the user to enter the monthly costs for the following expenses incurred from operating
his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance. The program should then display
the total monthly cost of these expenses, and the total annual cost of these expenses.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    float
        loanPayment = 0,
        insurance = 0,
        gas = 0,
        oil = 0,
        tires = 0,
        maintenance = 0,
        totalMonthlyCost = 0;


    std::cout << "Enter monthly cost for loan payment: ";
    std::cin >> loanPayment;

    std::cout << "Enter monthly cost for insurance: ";
    std::cin >> insurance;

    std::cout << "Enter monthly cost for gas: ";
    std::cin >> gas;

    std::cout << "Enter monthly cost for oil: ";
    std::cin >> oil;

    std::cout << "Enter monthly cost for tires: ";
    std::cin >> tires;

    std::cout << "Enter monthly cost for maintenance: ";
    std::cin >> maintenance;

    totalMonthlyCost = loanPayment + insurance + gas + oil + tires + maintenance;

    std::cout << "Total monthly cost: $" << totalMonthlyCost << std::endl;
    std::cout << "Total annual cost: $" << totalMonthlyCost * 12 << std::endl;

    return 0;
}
