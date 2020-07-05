/*
A bank charges $10 per month plus the following check fees for a commercial checking account:

$0.10 each for fewer than 20 checks
$0.08 each for 20-39 checks
$0.06 each for 40-59 checks
$0.04 each for 60 or more checks

The bank also charges an extra $15 if the balance of the account falls below $400
(before any check fees are applied). Write a program that asks for the beginning balance and the
number of checks written. Compute and display the bank's service fees for the month.

Input Validation: Do not accept a negative value for the number of check written. If a negative value is given for the beginning
balance, display an urgent message indicating the account is overdrawn.
*/
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float balance = 0.0f, fees = 10.0f, check = 0, checkFees = 0.0f;

    std::cout << "Enter the balance: ";
    std::cin >> balance;

    std::cout << "Enter number of checks: ";
    std::cin >> check;

    balance = balance - fees;

    if (check < 0)
    {
        std::cout << "Number of checks cannot be negative." << std::endl;
    }

    if (balance < 0)
    {
        std::cout << "The account is overdrawn." << std::endl;
    }
    else
    {
        if (balance < 400)
            fees = fees + 15;

        if (check < 20)
            checkFees = 0.10f;
        else if (check >= 20 && check <= 39)
            checkFees = 0.08f;
        else if (check >= 40 && check <= 59)
            checkFees = 0.06f;
        else if (check >= 60)
            checkFees = 0.04f;

        fees += (checkFees * check);

        std::cout << std::fixed << std::setprecision(2);
        std::cout << "The bank's service fees for the month: $" << fees << std::endl;
    }


    return 0;
}
