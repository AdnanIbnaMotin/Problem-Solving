/*
The monthly payment on a loan may be calculated by the following formula:

Payment = [{ Rate * (1 + Rate)^N } / { (1 + Rate)^N - 1 }] * L

Rate is the monthly interest rate, which is the annual interest rate divided by 12. (12 percent annual interest would
be 1 percent monthly interest.) N is the number of payments, and L is the amount of the loan. Write a program that asks
for these values then displays a report similar to:

    Loan Amount:            $10000.00
    Monthly Interest Rate:  1%
    Number of Payments:     36
    Monthly Payment:        $332.14
    Amount Paid Back:       $11957.15
    Interest Paid:          $1957.15
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{

    float payment = 0, L = 0, R = 0, N = 0;

    std::cout << "Enter load amount: ";
    std::cin >> L;

    std::cout << "Enter monthly interest rate (in Percentage): ";
    std::cin >> R;

    R = R/100;

    std::cout << "Enter number of payment: ";
    std::cin >> N;

    float temp = pow(1+R, N);
    float monthlyPayment = ( (R*temp) / (temp-1) ) * L;

    std::cout << std::fixed << std::setprecision(2) << std::endl;
    std::cout << "Loan Amount: $" << L << std::endl;
    std::cout << "Monthly Interest Rate: " << R*100 << "%" << std::endl;
    std::cout << "Number of Payments: " << N << std::endl;
    std::cout << "Monthly Payment: $" << monthlyPayment << std::endl;
    std::cout << "Amount Paid Back: $" << (monthlyPayment * N) << std::endl;
    std::cout << "Interest Paid: $" << (monthlyPayment * N) - L << std::endl;

    return 0;
}
