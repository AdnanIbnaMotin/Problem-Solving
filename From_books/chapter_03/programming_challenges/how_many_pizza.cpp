/*
Modify the program you wrote in Programming Challenge 20 {Pizza Pi) so it reports the number of pizzas you need to buy for
a party if each person attending is expected to eat an average of four slices. The program should ask the user for the number of
people who will be at the party, and for the diameter of the pizzas to be ordered. It should then calculate and display the
number of pizzas to purchase.
*/
#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float sliceArea = 14.125f;
    const float PI = 3.141519f;

    float diameterOfPizza = 0;
    int numOfPeople = 0;

    std::cout << "Diameter of the pizza (in inches): ";
    std::cin >> diameterOfPizza;

    std::cout << "Number of people will attend the party: ";
    std::cin >> numOfPeople;

    float r = diameterOfPizza / 2.0;
    float numOfSlice = (PI * r * r) / sliceArea;

    std::cout << std::fixed << std::setprecision(0);
    std::cout << "Number of pizzas need: " << (numOfPeople*4) / numOfSlice << std::endl;

    return 0;
}
