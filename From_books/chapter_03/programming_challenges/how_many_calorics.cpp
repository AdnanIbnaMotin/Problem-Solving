/*
A bag of cookies holds 30 cookies. The calorie information on the bag claims there are
10 "servings" in the bag and that a serving equals 300 calories. Write a program that
asks the user co input how many cookies he or she actually are, then reports how many
total calories were consumed.
*/

#include <iostream>

int main(int argc, char* argv[])
{
    int numOfCookiesInBag = 30;
    int numOfCaloriesInBag = 300*10;

    int aCookieCalories = numOfCaloriesInBag / numOfCookiesInBag;

    int cookiesAte = 0;

    std::cout << "Enter number of cookies ate: ";
    std::cin >> cookiesAte;

    std::cout << "Total calories consumed: " << cookiesAte * aCookieCalories << std::endl;

    return 0;
}
