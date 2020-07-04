/*
 *
 * Suppose an employee gees paid every two weeks and earns $2,200 each pay period. In
 * a year, the employee gees paid 26 times. Write a program that defines che following
 * variables:
 *
 * pay Amount This variable will bold the amount of pay the employee earns each
 * pay period. Initialize the variable with 2200.0.
 *
 * payPeriods This variable will hold the number of pay periods in a year. Initialize
 * the variable with 26.
 *
 * annual Pay The variable will hold the employee's total annual pay, which will be calculated
 *
 * The program should calculate the employee's total annual pay by multiplying the
 * employee's pay amount by the number of pay periods in a year and store the result in
 * che annual Pay variable. Display the total annual pay on the screen.
*/

#include <iostream>

int main(int argc, char* argv[])
{
	double payAmount = 2'200.0;
	int payPeriods = 26;

	double annualPay = payAmount * payPeriods;

	std::cout << "Total annual pay on the screen: $" << annualPay << std::endl;

	return 0;
}
