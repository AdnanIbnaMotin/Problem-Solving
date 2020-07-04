/*
The Yukon Widget Company manufactures widgets that weight 12.5 pounds each.
Write a program that calculates how many widgets are stacked on a pallet, based on the total weight of the pallet.
The program should ask the user how much the pallet weighs by itself and with the widgets stacked on it.
It should then calculate and display the number of widgets stacked on the pallet.
*/

#include <iostream>
#include <iomanip>

int main(int argc, char* argv[])
{
    float widgetWeight = 12.5;

    float palletWeight = 0;
    float pnw_Weight = 0;

    std::cout << "Enter the pallet weights by itself: ";
    std::cin >> palletWeight;

    std::cout << "Enter the pallet weights with the widgets: ";
    std::cin >> pnw_Weight;

    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The number of widgets stacked on the pallet: " << (pnw_Weight - palletWeight) / widgetWeight << std::endl;

    return 0;
}
