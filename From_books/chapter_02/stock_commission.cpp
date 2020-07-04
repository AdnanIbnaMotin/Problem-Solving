/*
 * Kathryn bought 750 shares of stock at a price of 435.00 per share. She must pay her stockbroker a 2
 * percent commission for the transaction. Write a program that calculates and displays the following:
 *
 * The amount paid for the stock alone (without the commission).
 * The amount of the commission.
 * The total amount paid (for the stock plus the commission).
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
	int shares = 750;
	float pricePerShare = 35.00;

	float totalPaid = shares * pricePerShare;

	float commission = totalPaid * 0.02;

	float totalPaidWithCommission = commission + totalPaid;

	std::cout << std::fixed << std::setprecision(2);
	std::cout << "The amount paid for the stock alone is: $" << totalPaid << std::endl;
	std::cout << "The ammount of commission: $" << commission << std::endl;
	std::cout << "The total amount paid (for the stock plus the commission): $" << totalPaidWithCommission << std::endl;
	return 0;
}
