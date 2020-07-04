/*
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:

    The number of shares that Joe purchased was 1,000.
    When Joe purchased the stock, he paid $45.50 per share
    Joe paid his stockbroker a commission that amounted to 2 percent of the amount he paid for the stock.

Two weeks later, Joe sold the stock. Here are the derails of the sale:

    The number of shares that Joe sold was 1,000.
    He sold the stock for $56.90 per share.
    He paid his stockbroker another commission that amounted to 2 percent of the amount he received for the stock.

Write a program that displays the following information:

    The amount of money Joe paid for the stock.
    The amount of commission Joe paid his broker when he bought the stock.
    The amount that Joe sold the stock for.
    The amount of commission Joe paid his broker when be sold the stock.

Display the amount of profit that Joe made after selling his stock and paying the two commissions to his broker.
(If the amount of profit that your program displays is a negative number, then Joe lost money on the transaction.)
*/

#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, char* argv[])
{
    int numOfStockPurSold = 1'000;
    float perStockPriceWhenPurchase= 45.50f;
    float perStockPriceWhenSold = 56.90f;

    float commission = 0.02f;

    float paidForTheStock = numOfStockPurSold * perStockPriceWhenPurchase;
    float paidComWhnPurch = paidForTheStock * commission;

    float soldTheStock = numOfStockPurSold * perStockPriceWhenSold;
    float paidComWhnSold = soldTheStock * commission;

    float totalCostOnPurchase = paidForTheStock - paidComWhnPurch;
    float totalCostOnSold = soldTheStock - paidComWhnSold;

    float profit = totalCostOnSold - totalCostOnPurchase;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The amount of money Joe paid for the stock: $" << paidForTheStock << std::endl;
    std::cout << "The amount of commission Joe paid his broker when he bought the stock: $" << paidComWhnPurch << std::endl;
    std::cout << "The amount that Joe sold the stock for: $" << soldTheStock << std::endl;
    std::cout << "The amount of commission Joe paid his broker when he sold the stock: $" << paidComWhnSold << std::endl;

    if(profit < 0)
    {
        std::cout << "The amount of money Joe lost: $" << abs(profit) << std::endl;
    }
    else
    {
        std::cout << "The amount of profit that Joe made: $" << profit << std::endl;
    }

    return 0;
}
